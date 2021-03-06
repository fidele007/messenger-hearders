/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class ASTextKitContext, NSLayoutManager, NSTextContainer;

@interface ASTextKitFontSizeAdjuster : NSObject {

	ASTextKitContext* _context;
	ASTextKitAttributes _attributes;
	mutex _textKitMutex;
	BOOL _measured;
	double _scaleFactor;
	NSLayoutManager* _sizingLayoutManager;
	NSTextContainer* _sizingTextContainer;
	CGSize _constrainedSize;

}

@property (assign,nonatomic) CGSize constrainedSize;              //@synthesize constrainedSize=_constrainedSize - In the implementation block
+(void)adjustFontSizeForAttributeString:(id)arg1 withScaleFactor:(double)arg2 ;
-(void)setConstrainedSize:(CGSize)arg1 ;
-(CGSize)constrainedSize;
-(unsigned long long)lineCountForString:(id)arg1 ;
-(id)initWithContext:(id)arg1 constrainedSize:(CGSize)arg2 textKitAttributes:(const ASTextKitAttributes*)arg3 ;
-(double)scaleFactor;
@end

