/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class MNConversationContact;

@interface MNSingleProfileImageView : UIImageView {

	MNConversationContact* _contact;

}

@property (nonatomic,copy) MNConversationContact * contact;              //@synthesize contact=_contact - In the implementation block
-(MNConversationContact *)contact;
-(void)setContact:(MNConversationContact *)arg1 ;
@end
