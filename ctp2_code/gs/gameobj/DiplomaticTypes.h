#ifdef HAVE_PRAGMA_ONCE
#pragma once
#endif
#ifndef __DIPLOMATICTYPES_H__
#define __DIPLOMATICTYPES_H__

   enum REQUEST_TYPE
		{

		REQUEST_TYPE_GREETING,


		REQUEST_TYPE_DEMAND_ADVANCE,
		REQUEST_TYPE_DEMAND_CITY,
		REQUEST_TYPE_DEMAND_MAP,
		REQUEST_TYPE_DEMAND_GOLD,
		REQUEST_TYPE_DEMAND_STOP_TRADE,
		REQUEST_TYPE_DEMAND_ATTACK_ENEMY,
		REQUEST_TYPE_DEMAND_LEAVE_OUR_LANDS,
		REQUEST_TYPE_DEMAND_REDUCE_POLLUTION,


		REQUEST_TYPE_OFFER_ADVANCE,
		REQUEST_TYPE_OFFER_CITY,
		REQUEST_TYPE_OFFER_MAP,
		REQUEST_TYPE_OFFER_GOLD,
		REQUEST_TYPE_OFFER_CEASE_FIRE,
		REQUEST_TYPE_OFFER_PERMANENT_ALLIANCE,
		REQUEST_TYPE_OFFER_PACT_CAPTURE_CITY,
		REQUEST_TYPE_OFFER_PACT_END_POLLUTION,


		REQUEST_TYPE_EXCHANGE_ADVANCE,
		REQUEST_TYPE_EXCHANGE_CITY,
		REQUEST_TYPE_EXCHANGE_MAP,
		REQUEST_TYPE_DEMAND_NO_PIRACY,

		REQUEST_TYPE_NULL,
		REQUEST_TYPE_MAX
		} ;















	enum REQUEST_RESPONSE_TYPE
		{
		REQUEST_RESPONSE_TYPE_ACCEPTED,
		REQUEST_RESPONSE_TYPE_REJECTED,
		REQUEST_RESPONSE_TYPE_NULL,
		REQUEST_RESPONSE_TYPE_MAX,
		} ;

#define k_MESSAGE_TONE_HOSTILE 0
#define k_MESSAGE_TONE_NEUTRAL 1
#define k_MESSAGE_TONE_FRIENDLY 2

#define k_MESSAGE_STRENGTH_STRONG 0
#define k_MESSAGE_STRENGTH_WEAK 1

#endif
