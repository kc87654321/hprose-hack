<?hh
/**********************************************************\
|                                                          |
|                          hprose                          |
|                                                          |
| Official WebSite: http://www.hprose.com/                 |
|                   http://www.hprose.org/                 |
|                                                          |
\**********************************************************/

/**********************************************************\
 *                                                        *
 * Hprose.hh                                              *
 *                                                        *
 * hprose for hack.                                       *
 *                                                        *
 * LastModified: Mar 6, 2015                              *
 * Author: Ma Bingyao <andot@hprose.com>                  *
 *                                                        *
\**********************************************************/

namespace {
    require('Hprose/Tags.hh');
    require('Hprose/ResultMode.hh');
    require('Hprose/BytesIO.hh');
    require('Hprose/ClassManager.hh');
    require('Hprose/Writer.hh');
    require('Hprose/RawReader.hh');
    require('Hprose/Reader.hh');
    require('Hprose/Serialize.hh');
    require('Hprose/Unserialize.hh');
    require('Hprose/Filter.hh');
    require('Hprose/Client.hh');
    require('Hprose/HttpClient.hh');
    require('Hprose/Service.hh');
    require('Hprose/HttpService.hh');

    class_alias('Hprose\\Tags', 'HproseTags');
    class_alias('Hprose\\ResultMode', 'HproseResultMode');
    class_alias('Hprose\\BytesIO', 'HproseBytesIO');
    class_alias('Hprose\\ClassManager', 'HproseClassManager');
    class_alias('Hprose\\Writer', 'HproseWriter');
    class_alias('Hprose\\RawReader', 'HproseRawReader');
    class_alias('Hprose\\Reader', 'HproseReader');
    class_alias('Hprose\\Filter', 'HproseFilter');
    class_alias('Hprose\\Client', 'HproseClient');
    class_alias('Hprose\\HttpClient', 'HproseHttpClient');
    class_alias('Hprose\\Service', 'HproseService');
    class_alias('Hprose\\HttpService', 'HproseHttpService');
    class_alias('Hprose\\HttpService', 'HproseHttpServer');
}
