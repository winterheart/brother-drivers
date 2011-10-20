//* Brother CUPS wrapper tool
//* Copyright (C) 2005-2009 Brother. Industries, Ltd.//*
//*                                    Ver1.00
//*
//* This program is free software; you can redistribute it and/or modify it
//* under the terms of the GNU General Public License as published by the Free
//* Software Foundation; either version 2 of the License, or (at your option)
//* any later version.
//*
//* This program is distributed in the hope that it will be useful, but WITHOUT
//* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
//* more details.
//*
//* You should have received a copy of the GNU General Public License along with
//* this program; if not, write to the Free Software Foundation, Inc., 59 Temple
//* Place, Suite 330, Boston, MA  02111-1307  USA
//*

#ifndef _BRCUPS_COMMANDS_H_
#define _BRCUPS_COMMANDS_H_

char brprintconf[30]="brprintconf";
		
typedef struct {
	char *option;                                 
	char *value;
} CMDLINELIST;

CMDLINELIST commandlinelist[] = {
	{  "Collate=OFF"		,	"-collate OFF"	},
	{  "Collate=ON"			,	"-collate OFF"	},    
	{  "MediaType=Plain"	,	"-md Plain"		},
	{  "MediaType=Thin"		,	"-md Thin"		},
	{  "MediaType=Thick"	,	"-md Thick"		},
	{  "MediaType=Thicker"	,	"-md Thicker"	},
	{  "MediaType=BOND"		,	"-md BOND"		},
	{  "MediaType=Recycled"	,	"-md Recycled"	},
	{  "MediaType=Env"		,	"-md Env"		},
	{  "MediaType=EnvThin"	,	"-md EnvThin"	},
	{  "MediaType=EnvThick"	,	"-md EnvThick"	},
	{  "MediaType=PostCard"	,	"-md PostCard"	},
	{  "MediaType=Label"	,	"-md Label"		},
	{  "BRResolution=600dpi"		,	"-reso Normal"	},
	{  "BRResolution=600x2400dpi"	,	"-reso Fine"	},
	{  "InputSlot=AutoSelect",	"-inslot AutoSelect"	},
	{  "InputSlot=Tray1"	,	"-inslot Tray1"		},
	{  "InputSlot=Manual"	,	"-inslot Manual"	},
	{  "BRMonoColor=Auto"	,	"-corm Auto"		},
	{  "BRMonoColor=FullColor"	,	"-corm Color"	},
	{  "BRMonoColor=Mono"	,	"-corm Mono"		},
	{ "papersize=A4"		,	"-pt A4"		},
	{ "papersize=Letter"	,	"-pt Letter"	},
	{ "papersize=Legal"		,	"-pt Legal"		},
	{ "papersize=Executive"	,	"-pt Executive" },
	{ "papersize=A5"		,	"-pt A5" },
	{ "papersize=PRA5Rotated",	"-pt PRA5Rotated" },
	{ "papersize=A6",			"-pt A6" },
	{ "papersize=B5",			"-pt B5" },
	{ "papersize=B6",			"-pt B6" },
	{ "papersize=JISB5",		"-pt JISB5" },
	{ "papersize=JISB6",		"-pt JISB6" },
	{ "papersize=EnvDL",		"-pt EnvDL" },
	{ "papersize=EnvC5",		"-pt EnvC5" },
	{ "papersize=Env10",		"-pt Env10" },
	{ "papersize=EnvMonarch",	"-pt EnvMonarch" },
	{ "papersize=Br3x5",		"-pt Br3x5" },
	{ "papersize=BrA4Long",		"-pt BrA4Long" },
	{ "papersize=FanFoldGermanLegal",			"-pt FanFoldGermanLegal" },
	{ "papersize=EnvPRC5Rotated",				"-pt EnvPRC5Rotated" },
	{ "papersize=PostCard",		"-pt PostCard" },
	{ "papersize=EnvYou4",		"-pt EnvYou4" },
	{ "papersize=EnvChou3",		"-pt EnvChou3" },
	{ "PageSize=A4",				"-pt A4" },
	{ "PageSize=Letter",			"-pt Letter" },
	{ "PageSize=Legal",				"-pt Legal" },
	{ "PageSize=Executive",			"-pt Executive" },
	{ "PageSize=A5",				"-pt A5" },
	{ "PageSize=PRA5Rotated",		"-pt PRA5Rotated" },
	{ "PageSize=A6",				"-pt A6" },
	{ "PageSize=B5",				"-pt B5" },
	{ "PageSize=B6",				"-pt B6" },
	{ "PageSize=JISB5",				"-pt JISB5" },
	{ "PageSize=JISB6",				"-pt JISB6" },
	{ "PageSize=EnvDL",				"-pt EnvDL" },
	{ "PageSize=EnvC5",				"-pt EnvC5" },
	{ "PageSize=Env10",				"-pt Env10" },
	{ "PageSize=EnvMonarch",		"-pt EnvMonarch" },
	{ "PageSize=Br3x5",				"-pt Br3x5" },
	{ "PageSize=BrA4Long",			"-pt BrA4Long" },
	{ "PageSize=FanFoldGermanLegal","-pt FanFoldGermanLegal" },
	{ "PageSize=EnvPRC5Rotated",	"-pt EnvPRC5Rotated" },
	{ "PageSize=PostCard",			"-pt PostCard" },
	{ "PageSize=EnvYou4",			"-pt EnvYou4" },
	{ "PageSize=EnvChou3",			"-pt EnvChou3" },
	{ "BRGray=OFF",		"-gray OFF" },               
	{ "BRGray=ON",		"-gray ON" },
	{ "BRColorMatching=Normal",		"-cm Normal" },
	{ "BRColorMatching=Vivid",		"-cm Vivid" },
	{ "BRColorMatching=None",		"-cm None" },
	{ "TonerSaveMode=OFF",			"-ts OFF" },
	{ "TonerSaveMode=ON",			"-ts ON" },
	{ "BRImproveOutput=OFF",		"-output OFF" },
	{ "BRImproveOutput=BRLessPaperCurl",	"-output BRLessPaperCurl" },
	{ "BRImproveOutput=BRFixIntensity",		"-output BRFixIntensity" },
	{ "BREnhanceBlkPrt=OFF",		"-ce OFF" },
	{ "BREnhanceBlkPrt=ON",			"-ce ON" },
	{ "BRReverse=ON",		"-reve ON"},
	{ "BRReverse=OFF",		"-reve OFF"},
	{ NULL   ,   NULL    },
};

CMDLINELIST standard_commandlinelist[] = {
	{ "media=A4",				"-pt A4" },
	{ "media=Letter",			"-pt Letter" },
	{ "media=Legal",			"-pt Legal" },
	{ "media=Executive",		"-pt Executive" },
	{ "media=A5",				"-pt A5" },
	{ "media=PRA5Rotated",		"-pt PRA5Rotated" },
	{ "media=A6",				"-pt A6" },
	{ "media=B5",				"-pt B5" },
	{ "media=B6",				"-pt B6" },
	{ "media=JISB5",			"-pt JISB5" },
	{ "media=JISB6",			"-pt JISB6" },
	{ "media=EnvDL",			"-pt EnvDL" },
	{ "media=EnvC5",			"-pt EnvC5" },
	{ "media=Env10",			"-pt Env10" },
	{ "media=EnvMonarch",		"-pt EnvMonarch" },
	{ "media=Br3x5",			"-pt Br3x5" },
	{ "media=BrA4Long",			"-pt BrA4Long" },
	{ "media=FanFoldGermanLegal",	"-pt FanFoldGermanLegal" },
	{ "media=EnvPRC5Rotated",		"-pt EnvPRC5Rotated" },
	{ "media=PostCard",				"-pt PostCard" },
	{ "media=EnvYou4",				"-pt EnvYou4" },
	{ "media=EnvChou3",				"-pt EnvChou3" },
	{ NULL   ,   NULL    },
};

CMDLINELIST commandlinelist2[] = {
	{	"Copies="   	,   "-copy "	},
	{	"BRBrightness="	,	"-brit "	},
	{	"BRContrast="	,	"-cont "	},
	{   "BRRed="		,	"-red "		},
	{   "BRGreen="		,	"-green "	},
	{   "BRBlue="		,	"-blue "	},
	{   "BRSaturation="	,	"-satu "	},   
	   { NULL   ,   NULL    },
};
typedef struct {
    char *value;
    char *brcommand;
} PPDCOMMANDLIST;


typedef   struct   {
   char             *label;
   PPDCOMMANDLIST   ppdcommandlist[];
}  PPDCOMMAND;

PPDCOMMAND  DefaultResolution={
  "DefaultBRResolution",
	{
		{ "600dpi"  , "-reso Normal"  },
		{ "600x2400dpi"  , "-reso Fine"  },
		{ NULL , NULL  }
	}
};

PPDCOMMAND  DefaultPageSize={                                  
    "DefaultPageSize",
	{
		{ "A4",				"-pt A4" },
		{ "Letter",				"-pt Letter" },
		{ "Legal",				"-pt Legal" },
		{ "Executive",				"-pt Executive" },
		{ "A5",				"-pt A5" },
		{ "PRA5Rotated",				"-pt PRA5Rotated" },
		{ "A6",				"-pt A6" },
		{ "B5",				"-pt B5" },
		{ "B6",				"-pt B6" },
		{ "JISB5",				"-pt JISB5" },
		{ "JISB6",				"-pt JISB6" },
		{ "EnvDL",				"-pt EnvDL" },
		{ "EnvC5",				"-pt EnvC5" },
		{ "Env10",				"-pt Env10" },
		{ "EnvMonarch",				"-pt EnvMonarch" },
		{ "Br3x5",			"-pt Br3x5" },
		{ "BrA4Long",		"-pt BrA4Long" },
		{ "FanFoldGermanLegal",				"-pt FanFoldGermanLegal" },
		{ "EnvPRC5Rotated",				"-pt EnvPRC5Rotated" },
		{ "PostCard",				"-pt PostCard" },
		{ "EnvYou4",			"-pt EnvYou4" },
		{ "EnvChou3",		"-pt EnvChou3" },
		{ NULL , NULL  }
	}
};

PPDCOMMAND  DefaultBRMonoColor={
	"DefaultBRMonoColor",
	{
		{  "Auto"	,	"-corm Auto"	},
		{  "FullColor"	,	"-corm Color"	},
		{  "Mono"	,	"-corm Mono"	},
		{ NULL , NULL  }
	}
};

PPDCOMMAND  DefaultBRGray={
	"DefaultBRGray",
	{
		{  "OFF"	,	"-gray OFF"	},
		{  "ON"	,	"-gray ON"	},
		{ NULL , NULL  }
	}
};

PPDCOMMAND  DefaultBRColorMediaType={
	"DefaultMediaType",
	{
		{  "Plain"			,	"-md Plain"      },
		{  "Thin"			,	"-md Thin"      },
		{  "Thick"	,	"-md Thick"      },
		{  "Thicker"	,	"-md Thicker"      },                    
		{  "BOND"			,	"-md BOND"      },
		{  "Recycled"	,	"-md Recycled"      },
		{  "Env"	,	"-md Env"      },
		{  "EnvThin"	,	"-md EnvThin"      },
		{  "EnvThick"	,	"-md EnvThick"      },
		{  "PostCard"	,	"-md PostCard"      },
		{  "Label"	,	"-md Label"      },
		{ NULL , NULL  }
	 }
};
PPDCOMMAND  DefaultBRColorMatching={
	"DefaultBRColorMatching",
	{
		{ "Normal", "-cm Normal" },
		{ "Vivid", "-cm Vivid" },
		{ "None", "-cm None" },
		{ NULL , NULL  }
	}
};

PPDCOMMAND  DefaultTonerSaveMode={
	"DefaultTonerSaveMode",
	{
		{ "OFF", "-ts OFF" },
		{ "ON", "-ts ON" },
		{ NULL , NULL  }
	}
};

PPDCOMMAND  DefaultBRImproveOutput={
	"DefaultBRImproveOutput",
	{
	    { "OFF", "-output OFF" },
		{ "BRLessPaperCurl", "-output BRLessPaperCurl" },
		{ "BRFixIntensity", "-output BRFixIntensity" },
		{ NULL , NULL  }
	}
};  

PPDCOMMAND  DefaultBRColorEnhancement={
	"DefaultBREnhanceBlkPrt",
	{
		{  "OFF"	,	"-ce OFF"	},
		{  "ON"	,	"-ce ON"	},
		{ NULL , NULL  }
	}
};

PPDCOMMAND  DefaultBRInputSlot={
	"DefaultInputSlot",
	{
		{  "AutoSelect"	,	"-inslot AutoSelect"	},
		{  "Tray1"	,	"-inslot Tray1"	},
		{  "Manual"	,	"-inslot Manual"	},
		{ NULL , NULL  }
	}
};

PPDCOMMAND  DefaultBRReverse={
	"DefaultBRReverse",
	{
		{  "OFF"	,	"-reve OFF"	},
		{  "ON"	,	"-reve ON"	},
		{ NULL , NULL  }
	}
};
PPDCOMMAND   *ppdcommand_all_list[] = {
	&DefaultBRInputSlot,
	&DefaultResolution,
	&DefaultPageSize,
	&DefaultBRMonoColor,
	&DefaultBRGray,
	&DefaultBRColorMediaType,
	&DefaultBRColorMatching,
	&DefaultTonerSaveMode,
	&DefaultBRImproveOutput,
	&DefaultBRColorEnhancement,
	&DefaultBRReverse,
	NULL
};

CMDLINELIST PPDdefaultN[] = {
	{"DefaultBRBrightness", "-brit "},
	{"DefaultBRContrast", "-cont "},
	{"DefaultBRRed", "-red "},
	{"DefaultBRGreen", "-green "},
	{"DefaultBRBlue", "-blue "},
	{"DefaultBRSaturation", "-satu "},
	{ NULL   ,   NULL    },
};

CMDLINELIST standard_media_commandlinelist[] = {
	   { NULL   ,   NULL    }
};

#endif
