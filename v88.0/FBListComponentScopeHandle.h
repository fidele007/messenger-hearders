/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBListComponentStateChangeListener;
@class FBListComponentController, FBListComponentThreadLocalScopeKey;

@interface FBListComponentScopeHandle : NSObject {

	id<FBListComponentStateChangeListener> _stateChangeListener;
	BOOL _hasAcquired;
	FBListComponentController* _componentController;
	FBListComponentThreadLocalScopeKey* _key;

}

@property (nonatomic,readonly) FBListComponentController * componentController;              //@synthesize componentController=_componentController - In the implementation block
@property (nonatomic,readonly) FBListComponentThreadLocalScopeKey * key;                     //@synthesize key=_key - In the implementation block
-(FBListComponentController *)componentController;
-(id)initWithStateChangeListener:(id)arg1 key:(id)arg2 componentController:(id)arg3 ;
-(BOOL)acquireFromComponent:(id)arg1 ;
-(void)updateState:(/*^block*/id)arg1 userInfo:(id)arg2 ;
-(FBListComponentThreadLocalScopeKey *)key;
@end

