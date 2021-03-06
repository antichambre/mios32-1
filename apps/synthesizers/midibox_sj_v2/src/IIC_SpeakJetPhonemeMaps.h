/*
 *  IIC_SpeakJetPhonemeMap.h
 *  kII
 *
 *  Created by Michael Markert, audiocommander.de on 24.11.06
 *
 *  Copyright 2006 Michael Markert, http://www.audiocommander.de
 *
 */

/*
 * Released under GNU General Public License
 * http://www.gnu.org/licenses/gpl.html
 * 
 * This program is free software; you can redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Foundation
 *
 * YOU ARE ALLOWED TO COPY AND CHANGE 
 * BUT YOU MUST RELEASE THE SOURCE TOO (UNDER GNU GPL) IF YOU RELEASE YOUR PRODUCT 
 * YOU ARE NOT ALLOWED TO USE IT WITHIN PROPRIETARY CLOSED-SOURCE PROJECTS
 */

#ifndef IIC_SPEAKJETPHONEMEMAP_H
#define IIC_SPEAKJETPHONEMEMAP_H


// phoneme maps
// [top to bottom: jaw high / mid / low] [left to right: tongue front / center / back] 


// vowel map
const unsigned char vowel_map[15][5] = {
	{ MSAPH_IY,			MSAPH_IY,		MSAPH_IY,		MSAPH_UW,		MSAPH_UW	},
	{ MSAPH_IY,			MSAPH_IY,		MSAPH_UW,		MSAPH_UW,		MSAPH_UW	},
	{ MSAPH_IH,			MSAPH_IY,		MSAPH_UW,		MSAPH_UH,		MSAPH_UW	},
	{ MSAPH_IH,			MSAPH_IH,		MSAPH_UH,		MSAPH_UH,		MSAPH_UH	},
	{ MSAPH_EY,			MSAPH_EY,		MSAPH_UH,		MSAPH_UH,		MSAPH_UH	},
		
	{ MSAPH_EY,			MSAPH_EY,		MSAPH_EY,		MSAPH_OW,		MSAPH_OW	},
	{ MSAPH_EY,			MSAPH_EY,		MSAPH_EY,		MSAPH_OW,		MSAPH_OW	},
	{ MSAPH_EY,			MSAPH_EY,		MSAPH_AX,		MSAPH_OW,		MSAPH_OW	},
	{ MSAPH_EH,			MSAPH_AX,		MSAPH_AX,		MSAPH_OH,		MSAPH_OH	},
	{ MSAPH_EH,			MSAPH_EH,		MSAPH_AX,		MSAPH_OH,		MSAPH_OH	},
	
	{ MSAPH_EH,			MSAPH_EH,		MSAPH_AX,		MSAPH_OH,		MSAPH_OH	},
	{ MSAPH_EH,			MSAPH_EH,		MSAPH_UX,		MSAPH_OH,		MSAPH_AW	},
	{ MSAPH_AY,			MSAPH_AY,		MSAPH_UX,		MSAPH_AW,		MSAPH_AW	},
	{ MSAPH_AY,			MSAPH_AY,		MSAPH_UX,		MSAPH_AW,		MSAPH_AW	},
	{ MSAPH_AY,			MSAPH_AY,		MSAPH_UX,		MSAPH_AW,		MSAPH_AW	}
};

/* diphtong map
const unsigned char diphtong_map[15][5] = {
	{ MSAPH_IYEH,		MSAPH_IYEH,		MSAPH_IYEH,		MSAPH_IHWW,		MSAPH_IYUW	},
	{ MSAPH_IYEH,		MSAPH_IYEH,		MSAPH_IHWW,		MSAPH_IHWW,		MSAPH_IYUW	},
	{ MSAPH_IYRR,		MSAPH_IYRR,		MSAPH_IYRR,		MSAPH_IYUW,		MSAPH_IYUW	},
	{ MSAPH_IYRR,		MSAPH_IYRR,		MSAPH_IYUW,		MSAPH_IYUW,		MSAPH_OWIY	},
	{ MSAPH_EYIY,		MSAPH_OHIY,		MSAPH_OHIY,		MSAPH_OWIY,		MSAPH_OWIY	},
	
	{ MSAPH_EYIY,		MSAPH_EYIY,		MSAPH_OHIY,		MSAPH_OWIY,		MSAPH_OWIY	},
	{ MSAPH_EYIY,		MSAPH_EYIY,		MSAPH_EYIY,		MSAPH_OWIY,		MSAPH_OWIY	},
	{ MSAPH_EYIY,		MSAPH_EYIY,		MSAPH_EYIY,		MSAPH_OWIY,		MSAPH_OWIY	},
	{ MSAPH_EH,			MSAPH_AX,		MSAPH_AX,		MSAPH_AX,		MSAPH_OH	},
	{ MSAPH_EH,			MSAPH_EH,		MSAPH_AX,		MSAPH_OH,		MSAPH_OH	},
	
	{ MSAPH_EHLL,		MSAPH_EHLL,		MSAPH_EHLL,		MSAPH_OWWW,		MSAPH_OWWW	},
	{ MSAPH_EYRR,		MSAPH_AXRR,		MSAPH_AXRR,		MSAPH_OWRR,		MSAPH_AWRR	},
	{ MSAPH_OHIH,		MSAPH_OHIH,		MSAPH_AYWW,		MSAPH_AYWW,		MSAPH_AXUW	},
	{ MSAPH_AY,			MSAPH_AY,		MSAPH_UX,		MSAPH_AW,		MSAPH_AW	},
	{ MSAPH_AY,			MSAPH_AY,		MSAPH_UX,		MSAPH_AW,		MSAPH_AW	}
}; */

// vowel & diphtong map
const unsigned char vowel_diphtong_map[15][5] = {
	{ MSAPH_IY,			MSAPH_IY,		MSAPH_IY,		MSAPH_UW,		MSAPH_UW	},
	{ MSAPH_IYEH,		MSAPH_IYEH,		MSAPH_IYEH,		MSAPH_IHWW,		MSAPH_IYUW	},
	{ MSAPH_IYEH,		MSAPH_IYRR,		MSAPH_IYRR,		MSAPH_IHWW,		MSAPH_IYUW	},
	{ MSAPH_IH,			MSAPH_IH,		MSAPH_IH,		MSAPH_UH,		MSAPH_UH	},
	{ MSAPH_EYIY,		MSAPH_OHIY,		MSAPH_OHIY,		MSAPH_UH,		MSAPH_OWIY	},
	
	{ MSAPH_EYIY,		MSAPH_EYIY,		MSAPH_OHIY,		MSAPH_OWIY,		MSAPH_OWIY	},
	{ MSAPH_EY,			MSAPH_EY,		MSAPH_EY,		MSAPH_OW,		MSAPH_OW	},
	{ MSAPH_EY,			MSAPH_EY,		MSAPH_EY,		MSAPH_OH,		MSAPH_OW	},
	{ MSAPH_EH,			MSAPH_AX,		MSAPH_AX,		MSAPH_AX,		MSAPH_OH	},
	{ MSAPH_EH,			MSAPH_EH,		MSAPH_AX,		MSAPH_OH,		MSAPH_OH	},
	
	{ MSAPH_EHLL,		MSAPH_EHLL,		MSAPH_EHLL,		MSAPH_OWWW,		MSAPH_OWWW	},
	{ MSAPH_EYRR,		MSAPH_AXRR,		MSAPH_AXRR,		MSAPH_OWRR,		MSAPH_AWRR	},
	{ MSAPH_OHIH,		MSAPH_OHIH,		MSAPH_AYWW,		MSAPH_AYWW,		MSAPH_AXUW	},
	{ MSAPH_AY,			MSAPH_AY,		MSAPH_UX,		MSAPH_AW,		MSAPH_AW	},
	{ MSAPH_AY,			MSAPH_AY,		MSAPH_UX,		MSAPH_AW,		MSAPH_AW	}
};

// consonant map
const unsigned char consonant_map[15][5] = {
	{ MSAPH_SE,			MSAPH_SE,		MSAPH_MM,		MSAPH_SO,		MSAPH_SO	},
	{ MSAPH_TS,			MSAPH_ZH,		MSAPH_ZH,		MSAPH_JH,		MSAPH_CH	},
	{ MSAPH_TS,			MSAPH_ZZ,		MSAPH_SH,		MSAPH_JH,		MSAPH_CH	},
	{ MSAPH_TT,			MSAPH_TT,		MSAPH_TH,		MSAPH_TU,		MSAPH_TU	},
	{ MSAPH_ED,			MSAPH_DE,		MSAPH_DH,		MSAPH_DO,		MSAPH_OD	},
	
	{ MSAPH_BE,			MSAPH_BE,		MSAPH_BO,		MSAPH_OB,		MSAPH_OB	},
	{ MSAPH_PE,			MSAPH_PE,		MSAPH_PO,		MSAPH_PO,		MSAPH_PO	},
	{ MSAPH_HE,			MSAPH_HE,		MSAPH_HO,		MSAPH_HO,		MSAPH_HO	},
	{ MSAPH_EK,			MSAPH_KE,		MSAPH_KE,		MSAPH_KO,		MSAPH_OK	},
	{ MSAPH_LE,			MSAPH_LE,		MSAPH_LE,		MSAPH_LO,		MSAPH_LO	},
	
	{ MSAPH_NE,			MSAPH_NE,		MSAPH_NE,		MSAPH_NO,		MSAPH_NO	},
	{ MSAPH_NGE,		MSAPH_NGE,		MSAPH_NGE,		MSAPH_NGO,		MSAPH_NGO	},
	{ MSAPH_EG,			MSAPH_GE,		MSAPH_NGO,		MSAPH_GO,		MSAPH_OG	},
	{ MSAPH_FF,			MSAPH_FF,		MSAPH_VV,		MSAPH_WH,		MSAPH_WW	},
	{ MSAPH_MM,			MSAPH_MM,		MSAPH_MM,		MSAPH_RR,		MSAPH_RR	}
};

// consonant map with start (mouth opening) only
const unsigned char consonant_open_map[15][5] = {
	
	{ MSAPH_SE,			MSAPH_SE,		MSAPH_MM,		MSAPH_SO,		MSAPH_SO	},
	{ MSAPH_TS,			MSAPH_ZH,		MSAPH_ZH,		MSAPH_JH,		MSAPH_CH	},
	{ MSAPH_TS,			MSAPH_ZZ,		MSAPH_SH,		MSAPH_JH,		MSAPH_CH	},
	{ MSAPH_TT,			MSAPH_TT,		MSAPH_TH,		MSAPH_TU,		MSAPH_TU	},
	{ MSAPH_DE,			MSAPH_DE,		MSAPH_DH,		MSAPH_DO,		MSAPH_DO	},
	
	{ MSAPH_BE,			MSAPH_BE,		MSAPH_MM,		MSAPH_BO,		MSAPH_BO	},
	{ MSAPH_PE,			MSAPH_PE,		MSAPH_MM,		MSAPH_PO,		MSAPH_PO	},
	{ MSAPH_HE,			MSAPH_HE,		MSAPH_MM,		MSAPH_HO,		MSAPH_HO	},
	{ MSAPH_KE,			MSAPH_KE,		MSAPH_MM,		MSAPH_KO,		MSAPH_KO	},
	{ MSAPH_LE,			MSAPH_LE,		MSAPH_MM,		MSAPH_LO,		MSAPH_LO	},
	
	{ MSAPH_NE,			MSAPH_NE,		MSAPH_NO,		MSAPH_NO,		MSAPH_NO	},
	{ MSAPH_NGE,		MSAPH_NGE,		MSAPH_NGO,		MSAPH_NGO,		MSAPH_NGO	},
	{ MSAPH_GE,			MSAPH_GE,		MSAPH_NGE,		MSAPH_GO,		MSAPH_GO	},
	{ MSAPH_MM,			MSAPH_MM,		MSAPH_MM,		MSAPH_RR,		MSAPH_RR	},
	{ MSAPH_FF,			MSAPH_FF,		MSAPH_VV,		MSAPH_WH,		MSAPH_WW	}
};

// consonant map with ending (mouth closing) only
const unsigned char consonant_close_map[15][5] = {
	
	{ MSAPH_SE,			MSAPH_SE,		MSAPH_MM,		MSAPH_SO,		MSAPH_SO	},
	{ MSAPH_TS,			MSAPH_ZH,		MSAPH_ZH,		MSAPH_JH,		MSAPH_CH	},
	{ MSAPH_TS,			MSAPH_ZZ,		MSAPH_SH,		MSAPH_JH,		MSAPH_CH	},
	{ MSAPH_TT,			MSAPH_TT,		MSAPH_TH,		MSAPH_TU,		MSAPH_TU	},
	{ MSAPH_ED,			MSAPH_ED,		MSAPH_ED,		MSAPH_OD,		MSAPH_OD	},
	
	{ MSAPH_BE,			MSAPH_BE,		MSAPH_OB,		MSAPH_OB,		MSAPH_OB	},
	{ MSAPH_PE,			MSAPH_PE,		MSAPH_PE,		MSAPH_PE,		MSAPH_PE	},
	{ MSAPH_HE,			MSAPH_HE,		MSAPH_HE,		MSAPH_HE,		MSAPH_OK	},
	{ MSAPH_EK,			MSAPH_EK,		MSAPH_EK,		MSAPH_OK,		MSAPH_OK	},
	{ MSAPH_LE,			MSAPH_LE,		MSAPH_LE,		MSAPH_LE,		MSAPH_OK	},
	
	{ MSAPH_NE,			MSAPH_NE,		MSAPH_NE,		MSAPH_NO,		MSAPH_NO	},
	{ MSAPH_NGE,		MSAPH_NGE,		MSAPH_NGE,		MSAPH_NGO,		MSAPH_NGO	},
	{ MSAPH_GE,			MSAPH_GE,		MSAPH_OG,		MSAPH_OG,		MSAPH_OG	},
	{ MSAPH_MM,			MSAPH_MM,		MSAPH_MM,		MSAPH_RR,		MSAPH_RR	},
	{ MSAPH_FF,			MSAPH_FF,		MSAPH_MM,		MSAPH_VV,		MSAPH_VV	},
};

// vowel and consonant map
const unsigned char vowl_cons_map[15][5] = {
	{ MSAPH_IY,			MSAPH_SE,		MSAPH_MM,		MSAPH_SO,		MSAPH_UW	},
	{ MSAPH_IYEH,		MSAPH_IYRR,		MSAPH_ZH,		MSAPH_IHWW,		MSAPH_IYUW	},
	{ MSAPH_TS,			MSAPH_ZZ,		MSAPH_SH,		MSAPH_JH,		MSAPH_CH	},
	{ MSAPH_TT,			MSAPH_IH,		MSAPH_TH,		MSAPH_UH,		MSAPH_TU	},
	{ MSAPH_ED,			MSAPH_DE,		MSAPH_DH,		MSAPH_DO,		MSAPH_OD	},
	
	{ MSAPH_EYIY,		MSAPH_BE,		MSAPH_OHIY,		MSAPH_BO,		MSAPH_OB	},
	{ MSAPH_EY,			MSAPH_PE,		MSAPH_OWIY,		MSAPH_PO,		MSAPH_OW	},
	{ MSAPH_EH,			MSAPH_HE,		MSAPH_AX,		MSAPH_HO,		MSAPH_OH	},
	{ MSAPH_EHLL,		MSAPH_LE,		MSA_PAUSE5,		MSAPH_LO,		MSAPH_OWWW	},
	{ MSAPH_EK,			MSAPH_KE,		MSA_PAUSE4,		MSAPH_KO,		MSAPH_OK	},
	
	{ MSAPH_EG,			MSAPH_GE,		MSA_PAUSE5,		MSAPH_GO,		MSAPH_OG	},
	{ MSAPH_EYRR,		MSAPH_AXRR,		MSAPH_RR,		MSAPH_OWRR,		MSAPH_AWRR	},
	{ MSAPH_OHIH,		MSAPH_NE,		MSAPH_AYWW,		MSAPH_NO,		MSAPH_AXUW	},
	{ MSAPH_AY,			MSAPH_NGE,		MSAPH_UX,		MSAPH_NGO,		MSAPH_AW	},
	{ MSAPH_FF,			MSAPH_VV,		MSAPH_MM,		MSAPH_WH,		MSAPH_WW	}
};



#endif /* IIC_SPEAKJETPHONEMEMAP_H */
