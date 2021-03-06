/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSectionComponentStateChangeListener;
@class FBSectionComponentController, FBSectionComponentThreadLocalScopeKey;

@interface FBSectionComponentScopeHandle : NSObject {

	id<FBSectionComponentStateChangeListener> _stateChangeListener;
	BOOL _hasAcquired;
	FBSectionComponentController* _componentController;
	FBSectionComponentThreadLocalScopeKey* _key;

}

@property (nonatomic,readonly) FBSectionComponentController * componentController;              //@synthesize componentController=_componentController - In the implementation block
@property (nonatomic,readonly) FBSectionComponentThreadLocalScopeKey * key;                     //@synthesize key=_key - In the implementation block
-(FBSectionComponentController *)componentController;
-(void)updateState:(/*^block*/id)arg1 userInfo:(id)arg2 ;
-(BOOL)acquireFromComponent:(id)arg1 ;
-(id)initWithStateChangeListener:(id)arg1 key:(id)arg2 componentController:(id)arg3 ;
-(FBSectionComponentThreadLocalScopeKey *)key;
@end

