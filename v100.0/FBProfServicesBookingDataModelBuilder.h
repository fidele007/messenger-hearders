/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface FBProfServicesBookingDataModelBuilder : NSObject {

	NSString* _specialRequest;
	NSString* _invoiceID;
	NSString* _pageName;
	NSString* _pageId;
	NSString* _productItemName;
	NSString* _requestStatus;
	NSString* _userName;
	NSString* _userId;
	BOOL _isBannedByPage;
	NSString* _suggestedTimeRangeStartDayOfWeekMonthDayTime;
	NSString* _suggestedTimeRangeStartDayOfWeekMonthDay;
	NSDate* _suggestedTimeRangeStart;
	NSDate* _suggestedTimeRangeEnd;
	NSString* _suggestedTimeRange;
	NSString* _requestId;
	NSString* _productItemPrice;
	NSString* _phoneNumber;
	NSString* _bookingStatus;
	NSString* _requestedTimeDayOfWeekMonthDayTime;
	NSString* _userAvailability;
	NSString* _pageSingleLineFullAddress;
	NSString* _pageStreet;
	NSString* _productItemProfilePictureURI;
	NSString* _pageProfilePictureURI;

}
+(id)profServicesBookingDataModel;
+(id)profServicesBookingDataModelFromExistingProfServicesBookingDataModel:(id)arg1 ;
-(id)withUserId:(id)arg1 ;
-(id)withPhoneNumber:(id)arg1 ;
-(id)withSpecialRequest:(id)arg1 ;
-(id)withInvoiceID:(id)arg1 ;
-(id)withPageName:(id)arg1 ;
-(id)withPageId:(id)arg1 ;
-(id)withProductItemName:(id)arg1 ;
-(id)withRequestStatus:(id)arg1 ;
-(id)withUserName:(id)arg1 ;
-(id)withIsBannedByPage:(BOOL)arg1 ;
-(id)withSuggestedTimeRangeStartDayOfWeekMonthDayTime:(id)arg1 ;
-(id)withSuggestedTimeRangeStartDayOfWeekMonthDay:(id)arg1 ;
-(id)withSuggestedTimeRangeStart:(id)arg1 ;
-(id)withSuggestedTimeRangeEnd:(id)arg1 ;
-(id)withSuggestedTimeRange:(id)arg1 ;
-(id)withRequestId:(id)arg1 ;
-(id)withProductItemPrice:(id)arg1 ;
-(id)withBookingStatus:(id)arg1 ;
-(id)withRequestedTimeDayOfWeekMonthDayTime:(id)arg1 ;
-(id)withUserAvailability:(id)arg1 ;
-(id)withPageSingleLineFullAddress:(id)arg1 ;
-(id)withPageStreet:(id)arg1 ;
-(id)withProductItemProfilePictureURI:(id)arg1 ;
-(id)withPageProfilePictureURI:(id)arg1 ;
-(id)build;
@end

