/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFont, UIColor;

@interface FBFeedMessageStyle : NSObject {

	UIFont* _regularMessageFont;
	UIFont* _boldMessageFont;
	UIFont* _largeMessageFont;
	UIColor* _messageColor;
	UIColor* _suffixColor;
	UIColor* _linkMessageColor;
	double _lineHeight;

}

@property (nonatomic,readonly) UIFont * regularMessageFont;              //@synthesize regularMessageFont=_regularMessageFont - In the implementation block
@property (nonatomic,readonly) UIFont * boldMessageFont;                 //@synthesize boldMessageFont=_boldMessageFont - In the implementation block
@property (nonatomic,readonly) UIFont * largeMessageFont;                //@synthesize largeMessageFont=_largeMessageFont - In the implementation block
@property (nonatomic,readonly) UIColor * messageColor;                   //@synthesize messageColor=_messageColor - In the implementation block
@property (nonatomic,readonly) UIColor * suffixColor;                    //@synthesize suffixColor=_suffixColor - In the implementation block
@property (nonatomic,readonly) UIColor * linkMessageColor;               //@synthesize linkMessageColor=_linkMessageColor - In the implementation block
@property (nonatomic,readonly) double lineHeight;                        //@synthesize lineHeight=_lineHeight - In the implementation block
+(id)defaultMessageStyleWithFontFoundry:(id)arg1 useFIGFont:(BOOL)arg2 ;
-(UIFont *)regularMessageFont;
-(UIFont *)boldMessageFont;
-(UIFont *)largeMessageFont;
-(UIColor *)suffixColor;
-(UIColor *)linkMessageColor;
-(double)lineHeight;
-(UIColor *)messageColor;
@end

