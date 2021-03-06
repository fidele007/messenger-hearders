/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionStoreStateModifying;
@interface FBGraphQLConnectionStoreAsynchronousModificationPair : NSObject {

	id<FBGraphQLConnectionStoreStateModifying> _modification;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) id<FBGraphQLConnectionStoreStateModifying> modification;              //@synthesize modification=_modification - In the implementation block
@property (nonatomic,readonly) id callback;                                                          //@synthesize callback=_callback - In the implementation block
-(id)initWithModification:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)callback;
-(id<FBGraphQLConnectionStoreStateModifying>)modification;
@end

