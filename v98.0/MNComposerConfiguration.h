/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNComposerConfiguration : FBValueObject <NSCopying> {

	BOOL _dynamicComposerEnabled;
	BOOL _longPressHandlersEnabled;
	BOOL _moreDrawerAboveComposer;
	BOOL _enableEmojiToggleText;
	long long _composerBarButtonCollection;
	long long _textBoxPosition;

}

@property (nonatomic,readonly) BOOL includeRTCButtonsInComposerBar; 
@property (nonatomic,readonly) long long composerBarButtonCollection;              //@synthesize composerBarButtonCollection=_composerBarButtonCollection - In the implementation block
@property (nonatomic,readonly) BOOL dynamicComposerEnabled;                        //@synthesize dynamicComposerEnabled=_dynamicComposerEnabled - In the implementation block
@property (nonatomic,readonly) BOOL longPressHandlersEnabled;                      //@synthesize longPressHandlersEnabled=_longPressHandlersEnabled - In the implementation block
@property (nonatomic,readonly) BOOL moreDrawerAboveComposer;                       //@synthesize moreDrawerAboveComposer=_moreDrawerAboveComposer - In the implementation block
@property (nonatomic,readonly) BOOL enableEmojiToggleText;                         //@synthesize enableEmojiToggleText=_enableEmojiToggleText - In the implementation block
@property (nonatomic,readonly) long long textBoxPosition;                          //@synthesize textBoxPosition=_textBoxPosition - In the implementation block
-(long long)composerBarButtonCollection;
-(BOOL)includeRTCButtonsInComposerBar;
-(BOOL)dynamicComposerEnabled;
-(BOOL)moreDrawerAboveComposer;
-(long long)textBoxPosition;
-(BOOL)enableEmojiToggleText;
-(BOOL)longPressHandlersEnabled;
-(id)initWithComposerBarButtonCollection:(long long)arg1 dynamicComposerEnabled:(BOOL)arg2 longPressHandlersEnabled:(BOOL)arg3 moreDrawerAboveComposer:(BOOL)arg4 enableEmojiToggleText:(BOOL)arg5 textBoxPosition:(long long)arg6 ;
@end
