/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerActionButton;
@class UIView, NSString;

@interface MNComposerActionBarButtonItem : NSObject {

	BOOL _defaultActionButton;
	UIView*<MNComposerActionButton> _composerActionButton;
	NSString* _imageName;
	long long _primaryExtensionType;
	NSString* _selectedImageName;

}

@property (nonatomic,readonly) UIView*<MNComposerActionButton> composerActionButton;               //@synthesize composerActionButton=_composerActionButton - In the implementation block
@property (getter=isDefaultActionButton,nonatomic,readonly) BOOL defaultActionButton;              //@synthesize defaultActionButton=_defaultActionButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName;                                          //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,readonly) long long primaryExtensionType;                                     //@synthesize primaryExtensionType=_primaryExtensionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedImageName;                                  //@synthesize selectedImageName=_selectedImageName - In the implementation block
-(long long)primaryExtensionType;
-(id)initWithPrimaryExtensionType:(long long)arg1 composerActionButton:(id)arg2 imageName:(id)arg3 selectedImageName:(id)arg4 isDefaultActionButton:(BOOL)arg5 ;
-(UIView*<MNComposerActionButton>)composerActionButton;
-(BOOL)isDefaultActionButton;
-(NSString *)selectedImageName;
-(NSString *)imageName;
@end
