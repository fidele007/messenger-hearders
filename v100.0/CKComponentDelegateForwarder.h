/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIView;

@interface CKComponentDelegateForwarder : NSObject {

	vector<SEL *, std::__1::allocator<SEL *> >* _selectors;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;              //@synthesize view=_view - In the implementation block
+(id)newWithSelectors:(vector<SEL *, std::__1::allocator<SEL *> >*)arg1 ;
-(void)_doNothing;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(UIView *)view;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

