/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContactImporterAddressbookPersonCredential.h>

@class NSString;

@interface FBContactImporterAddressbookPersonEmail : NSObject <FBContactImporterAddressbookPersonCredential> {

	int _type;
	NSString* _label;
	NSString* _value;

}

@property (nonatomic,readonly) int type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * value;                    //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithValue:(CFStringRef)arg1 ABRecordLabel:(CFStringRef)arg2 ;
-(int)_getTypeForLabel:(CFStringRef)arg1 ;
-(id)_getStringForLabel:(CFStringRef)arg1 ;
-(BOOL)isBetterChoiceForPrimaryCredentialThan:(id)arg1 ;
-(NSString *)description;
-(int)type;
-(NSString *)value;
-(NSString *)label;
-(id)initWithValue:(CFStringRef)arg1 ;
@end

