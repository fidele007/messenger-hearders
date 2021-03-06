/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkDispatch;
@class NSString;

@interface MNPaymentsGroupCommerceGraphRequest : NSObject {

	NSString* _currentUserId;
	id<FBNetworkDispatch> _networkDispatch;

}
-(id)initWithCurrentUserId:(id)arg1 networkDispatch:(id)arg2 ;
-(void)dismissPlatformContextBannerWithPlatformContextId:(id)arg1 succcessBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)markPlatformContextAsSoldWithPlatformContextId:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
@end

