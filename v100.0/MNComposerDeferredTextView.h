/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerDeferredView.h>
#import <Messenger/MNComposerTextViewConfiguring.h>

@protocol MNGrowingTextViewDelegate;
@class NSAttributedString, NSString, MNGrowingTextView, NSNumber;

@interface MNComposerDeferredTextView : NSObject <MNComposerDeferredView, MNComposerTextViewConfiguring> {

	/*^block*/id _materializationBlock;
	NSAttributedString* _attributedText;
	id<MNGrowingTextViewDelegate> _delegate;
	NSNumber* _maxNumberOfLines;
	NSString* _placeholderText;
	MNGrowingTextView* _growingTextView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic,__weak) id<MNGrowingTextViewDelegate> delegate; 
@property (assign,nonatomic) unsigned long long maxNumberOfLines; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) MNGrowingTextView * growingTextView;                      //@synthesize growingTextView=_growingTextView - In the implementation block
-(void)setMaxNumberOfLines:(unsigned long long)arg1 ;
-(MNGrowingTextView *)growingTextView;
-(unsigned long long)maxNumberOfLines;
-(id)initWithMaterializationBlock:(/*^block*/id)arg1 ;
-(void)dematerialize;
-(void)materialize;
-(void)setDelegate:(id<MNGrowingTextViewDelegate>)arg1 ;
-(id<MNGrowingTextViewDelegate>)delegate;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
@end
