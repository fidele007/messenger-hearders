/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface MNImportedContactCardBuilder : NSObject {

	NSArray* _contexts;
	NSString* _mainActionTitle;
	NSString* _partOfTitleToBold;
	NSString* _primaryAuxiliaryActionTitle;
	NSString* _userId;
	NSString* _secondaryAuxiliaryActionTitle;
	NSString* _title;

}
+(id)anImportedContactCard;
-(id)withContexts:(id)arg1 ;
-(id)withMainActionTitle:(id)arg1 ;
-(id)withPartOfTitleToBold:(id)arg1 ;
-(id)withPrimaryAuxiliaryActionTitle:(id)arg1 ;
-(id)withUserId:(id)arg1 ;
-(id)withSecondaryAuxiliaryActionTitle:(id)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end

