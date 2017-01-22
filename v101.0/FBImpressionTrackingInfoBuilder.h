/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSNumber;

@interface FBImpressionTrackingInfoBuilder : NSObject {

	BOOL _sponsoredValue;
	NSString* _sponsorableID;
	NSString* _parentSponsorableID;
	NSArray* _sponsorableTrackingCodes;
	NSArray* _sponsorableImpressionURLs;
	double _impressionTime;
	NSNumber* _rowIndex;
	BOOL _needsThirdPartyPing;
	BOOL _isAutoScroll;
	unsigned long long _impressionType;

}
+(id)impressionTrackingInfoFromExistingImpressionTrackingInfo:(id)arg1 ;
+(id)impressionTrackingInfo;
-(id)withImpressionTime:(double)arg1 ;
-(id)withImpressionType:(unsigned long long)arg1 ;
-(id)withSponsoredValue:(BOOL)arg1 ;
-(id)withSponsorableID:(id)arg1 ;
-(id)withParentSponsorableID:(id)arg1 ;
-(id)withSponsorableTrackingCodes:(id)arg1 ;
-(id)withSponsorableImpressionURLs:(id)arg1 ;
-(id)withRowIndex:(id)arg1 ;
-(id)withNeedsThirdPartyPing:(BOOL)arg1 ;
-(id)withIsAutoScroll:(BOOL)arg1 ;
-(id)build;
@end
