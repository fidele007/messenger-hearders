/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAttachmentView.h>

@protocol FBIntentHandler;
@class MNCoreTextView, MNAttachmentActionButton, MNExampleAttachmentViewModel, NSString;

@interface MNExampleAttachmentView : UIView <MNAttachmentView> {

	MNCoreTextView* _textView;
	MNAttachmentActionButton* _actionButton;
	id<FBIntentHandler> _intentHandler;
	MNExampleAttachmentViewModel* _exampleAttachmentViewModel;

}

@property (nonatomic,copy) MNExampleAttachmentViewModel * exampleAttachmentViewModel;              //@synthesize exampleAttachmentViewModel=_exampleAttachmentViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
+(CGSize)sizeThatFits:(CGSize)arg1 withExampleAttachmentViewModel:(id)arg2 ;
-(id)initWithIntentHandler:(id)arg1 ;
-(void)_handleActionTap;
-(MNExampleAttachmentViewModel *)exampleAttachmentViewModel;
-(void)setExampleAttachmentViewModel:(MNExampleAttachmentViewModel *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

