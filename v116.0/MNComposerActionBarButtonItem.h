/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerActionButton;
@class UIView, NSString, MNComposerActionBarItem;

@interface MNComposerActionBarButtonItem : NSObject {

	BOOL _defaultActionButton;
	UIView*<MNComposerActionButton> _composerActionButton;
	NSString* _imageName;
	NSString* _selectedImageName;
	MNComposerActionBarItem* _barItem;

}

@property (nonatomic,readonly) UIView*<MNComposerActionButton> composerActionButton;               //@synthesize composerActionButton=_composerActionButton - In the implementation block
@property (getter=isDefaultActionButton,nonatomic,readonly) BOOL defaultActionButton;              //@synthesize defaultActionButton=_defaultActionButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName;                                          //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedImageName;                                  //@synthesize selectedImageName=_selectedImageName - In the implementation block
@property (nonatomic,copy,readonly) MNComposerActionBarItem * barItem;                             //@synthesize barItem=_barItem - In the implementation block
-(id)initWithComposerActionButton:(id)arg1 imageName:(id)arg2 selectedImageName:(id)arg3 isDefaultActionButton:(BOOL)arg4 barItem:(id)arg5 ;
-(UIView*<MNComposerActionButton>)composerActionButton;
-(BOOL)isDefaultActionButton;
-(NSString *)selectedImageName;
-(MNComposerActionBarItem *)barItem;
-(NSString *)imageName;
@end

