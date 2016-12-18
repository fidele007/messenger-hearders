/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray;

@interface ZRUrlRewriteInfo : NSObject <NSCoding> {

	NSArray* _rewriteRules;
	NSArray* _testRegexes;

}

@property (nonatomic,copy,readonly) NSArray * rewriteRules;              //@synthesize rewriteRules=_rewriteRules - In the implementation block
@property (nonatomic,copy,readonly) NSArray * testRegexes;               //@synthesize testRegexes=_testRegexes - In the implementation block
+(id)defaultRewriteInfo;
+(id)rewriteInfoFromFile:(id)arg1 ;
-(id)initWithRules:(id)arg1 testRegexes:(id)arg2 ;
-(NSArray *)rewriteRules;
-(NSArray *)testRegexes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeToFile:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
@end

