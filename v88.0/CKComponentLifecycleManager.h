/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponentStateListener.h>

@protocol CKComponentSizeRangeProviding, CKComponentLifecycleManagerAsynchronousUpdateHandler, CKComponentLifecycleManagerDelegate;
@class UIView, NSSet, CKComponentScopeRoot, NSString;

@interface CKComponentLifecycleManager : NSObject <CKComponentStateListener> {

	UIView* _mountedView;
	NSSet* _mountedComponents;
	Class _componentProvider;
	id<CKComponentSizeRangeProviding> _sizeRangeProvider;
	Mutex _mutex;
	CKComponentScopeRoot* _previousRoot;
	unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >* _pendingStateUpdates;
	CKComponentLifecycleManagerState* _state;
	id<CKComponentLifecycleManagerAsynchronousUpdateHandler> _asynchronousUpdateHandler;
	id<CKComponentLifecycleManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKComponentLifecycleManagerAsynchronousUpdateHandler> asynchronousUpdateHandler;              //@synthesize asynchronousUpdateHandler=_asynchronousUpdateHandler - In the implementation block
@property (assign,nonatomic,__weak) id<CKComponentLifecycleManagerDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithComponentProvider:(Class)arg1 sizeRangeProvider:(id)arg2 ;
-(id)scopeRoot;
-(void)attachToView:(id)arg1 ;
-(const CKComponentLayout*)componentLayout;
-(void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(/*^block*/id)arg3 mode:(unsigned long long)arg4 ;
-(id)initWithComponentProvider:(Class)arg1 ;
-(void)setAsynchronousUpdateHandler:(id<CKComponentLifecycleManagerAsynchronousUpdateHandler>)arg1 ;
-(void)updateWithStateWithoutMounting:(const CKComponentLifecycleManagerState*)arg1 ;
-(CKComponentLifecycleManagerState*)prepareForUpdateWithModel:(id)arg1 constrainedSize:(CKSizeRange)arg2 context:(id)arg3 ;
-(void)_mountLayout;
-(void)detachFromView;
-(BOOL)isAttachedToView;
-(id<CKComponentLifecycleManagerAsynchronousUpdateHandler>)asynchronousUpdateHandler;
-(void)updateWithState:(const CKComponentLifecycleManagerState*)arg1 ;
-(CGSize)size;
-(void)setDelegate:(id<CKComponentLifecycleManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<CKComponentLifecycleManagerDelegate>)delegate;
-(const CKComponentLifecycleManagerState*)state;
-(id)model;
@end

