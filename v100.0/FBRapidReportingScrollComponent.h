/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponent.h>

@class CKComponent;

@interface FBRapidReportingScrollComponent : CKComponent {

	CKComponent* _child;
	int _direction;
	UIEdgeInsets _contentInset;
	FBRapidReportingScrollDelegateActions _scrollDelegateActions;

}

@property (assign,nonatomic) FBRapidReportingScrollDelegateActions scrollDelegateActions;              //@synthesize scrollDelegateActions=_scrollDelegateActions - In the implementation block
+(id)newWithDirection:(int)arg1 contentInset:(UIEdgeInsets)arg2 scrollDelegateActions:(FBRapidReportingScrollDelegateActions)arg3 child:(id)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(MountResult*)mountInContext:(const MountContext*)arg1 size:(CGSize)arg2 children:(shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > >*)arg3 supercomponent:(id)arg4 ;
-(FBRapidReportingScrollDelegateActions)scrollDelegateActions;
-(void)setScrollDelegateActions:(FBRapidReportingScrollDelegateActions)arg1 ;
-(void)scrollToBottom;
@end

