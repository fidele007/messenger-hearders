/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RCTJSStackFrame : NSObject {

	NSString* _methodName;
	NSString* _file;
	long long _lineNumber;
	long long _column;

}

@property (nonatomic,copy,readonly) NSString * methodName;              //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,copy,readonly) NSString * file;                    //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) long long lineNumber;                    //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,readonly) long long column;                        //@synthesize column=_column - In the implementation block
+(id)stackFrameWithLine:(id)arg1 ;
+(id)stackFrameWithDictionary:(id)arg1 ;
+(id)stackFramesWithLines:(id)arg1 ;
+(id)stackFramesWithDictionaries:(id)arg1 ;
-(id)initWithMethodName:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 column:(long long)arg4 ;
-(NSString *)methodName;
-(long long)lineNumber;
-(long long)column;
-(id)toDictionary;
-(NSString *)file;
@end
