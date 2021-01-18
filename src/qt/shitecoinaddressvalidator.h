// Copyright (c) 2011-2020 The shitecoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef shitecoin_QT_shitecoinADDRESSVALIDATOR_H
#define shitecoin_QT_shitecoinADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class shitecoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit shitecoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** shitecoin address widget validator, checks for a valid shitecoin address.
 */
class shitecoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit shitecoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // shitecoin_QT_shitecoinADDRESSVALIDATOR_H
