/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContactImporterAddressBookPersonProperty.h>

@class NSString;

@interface FBContactImporterAddressBookPersonInstantMessage : NSObject <FBContactImporterAddressBookPersonProperty> {

	NSString* _service;
	NSString* _userName;

}

@property (nonatomic,copy,readonly) NSString * service;               //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * userName;              //@synthesize userName=_userName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyFromABLabelRef:(CFStringRef)arg1 ABValueRef:(void*)arg2 ;
-(id)asStrings;
-(id)_initWithLabel:(id)arg1 serviceDict:(id)arg2 ;
-(NSString *)userName;
-(NSString *)description;
-(NSString *)service;
@end

