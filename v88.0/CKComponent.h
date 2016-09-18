/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class CKComponentScopeHandle, UIView;

@interface CKComponent : NSObject {

	CKComponentScopeHandle* _scopeHandle;
	CKComponentViewConfiguration* _viewConfiguration;
	CKComponentSize _size;
	unique_ptr<CKComponentMountInfo, std::__1::default_delete<CKComponentMountInfo> >* _mountInfo;

}

@property (assign,nonatomic,__weak) UIView * rootComponentMountedView; 
@property (nonatomic,readonly) id<NSObject> scopeFrameToken; 
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 ;
+(id)new;
+(id)initialState;
-(CKComponentViewContext)viewContext;
-(CKComponentLayout*)layoutThatFits:(CKSizeRange)arg1 parentSize:(CGSize)arg2 ;
-(MountResult*)mountInContext:(const MountContext*)arg1 size:(CGSize)arg2 children:(shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > >*)arg3 supercomponent:(id)arg4 ;
-(void)unmount;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(id)viewForAnimation;
-(void)updateState:(/*^block*/id)arg1 mode:(unsigned long long)arg2 ;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsOnInitialMount;
-(id<NSObject>)scopeFrameToken;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 restrictedToSize:(const CKComponentSize*)arg2 relativeToParentSize:(CGSize)arg3 ;
-(id)initWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 ;
-(void)_relinquishMountedView;
-(id)nextResponderAfterController;
-(UIView *)rootComponentMountedView;
-(const CKComponentViewConfiguration*)viewConfiguration;
-(void)childrenDidMount;
-(BOOL)shouldMemoizeLayout;
-(void)setRootComponentMountedView:(UIView *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)nextResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)controller;
-(id)debugQuickLookObject;
@end

