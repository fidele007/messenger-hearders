/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNModelSubscription;

@interface MNChildModelSubscription : NSObject {

	MNModelSubscription* _subscription;
	long long _importance;

}

@property (nonatomic,readonly) MNModelSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,readonly) long long importance;                            //@synthesize importance=_importance - In the implementation block
-(id)initWithSubscription:(id)arg1 importance:(long long)arg2 ;
-(long long)importance;
-(MNModelSubscription *)subscription;
@end

