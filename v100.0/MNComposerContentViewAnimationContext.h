/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNComposerContentWrapperView;

@interface MNComposerContentViewAnimationContext : NSObject {

	/*^block*/id _completion;
	BOOL _animated;
	MNComposerContentWrapperView* _fromContentWrapperView;
	MNComposerContentWrapperView* _toContentWrapperView;

}

@property (nonatomic,readonly) BOOL animated;                                                             //@synthesize animated=_animated - In the implementation block
@property (nonatomic,__weak,readonly) MNComposerContentWrapperView * fromContentWrapperView;              //@synthesize fromContentWrapperView=_fromContentWrapperView - In the implementation block
@property (nonatomic,readonly) MNComposerContentWrapperView * toContentWrapperView;                       //@synthesize toContentWrapperView=_toContentWrapperView - In the implementation block
-(id)initWithFromContentWrapperView:(id)arg1 toContentWrapperView:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(MNComposerContentWrapperView *)fromContentWrapperView;
-(MNComposerContentWrapperView *)toContentWrapperView;
-(BOOL)animated;
-(void)complete;
@end

