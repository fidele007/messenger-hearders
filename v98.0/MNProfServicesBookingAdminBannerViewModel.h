/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBProfServicesBookingDataModel;

@interface MNProfServicesBookingAdminBannerViewModel : FBValueObject <NSCopying> {

	unsigned long long _pendingRequestCount;
	unsigned long long _requestedRequestCount;
	NSString* _userName;
	FBProfServicesBookingDataModel* _bookingViewModel;

}

@property (nonatomic,readonly) unsigned long long pendingRequestCount;                              //@synthesize pendingRequestCount=_pendingRequestCount - In the implementation block
@property (nonatomic,readonly) unsigned long long requestedRequestCount;                            //@synthesize requestedRequestCount=_requestedRequestCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * userName;                                            //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy,readonly) FBProfServicesBookingDataModel * bookingViewModel;              //@synthesize bookingViewModel=_bookingViewModel - In the implementation block
-(id)initWithPendingRequestCount:(unsigned long long)arg1 requestedRequestCount:(unsigned long long)arg2 userName:(id)arg3 bookingViewModel:(id)arg4 ;
-(unsigned long long)pendingRequestCount;
-(unsigned long long)requestedRequestCount;
-(FBProfServicesBookingDataModel *)bookingViewModel;
-(NSString *)userName;
@end

