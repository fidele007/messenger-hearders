/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL, NSArray;

@interface FBDialogConfig : NSObject <NSCoding> {

	NSString* _name;
	NSURL* _URL;
	NSArray* _versions;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * URL;                     //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSArray * versions;              //@synthesize versions=_versions - In the implementation block
+(id)dialogConfigWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)versions;
-(void)setVersions:(NSArray *)arg1 ;
@end

