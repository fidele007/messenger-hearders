/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBrowserExtensionAutofillGroup.h>

@class NSDictionary, NSArray, NSString;

@interface FBBrowserExtensionAutofillGroupName : NSObject <FBBrowserExtensionAutofillGroup> {

	NSDictionary* _autofillData;
	NSArray* _requestedAutofillTags;
	NSString* _groupType;

}

@property (nonatomic,copy) NSArray * requestedAutofillTags;              //@synthesize requestedAutofillTags=_requestedAutofillTags - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupType;                //@synthesize groupType=_groupType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autofillTags;
-(id)_displayTextFromData:(id)arg1 ;
-(id)_additionalAutofillFieldsFromData:(id)arg1 ;
-(id)toDisplayText;
-(id)toCanonicalDictionary;
-(NSArray *)requestedAutofillTags;
-(void)setRequestedAutofillTags:(NSArray *)arg1 ;
-(id)initWithAutofillData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)toDictionary;
-(NSString *)groupType;
@end
