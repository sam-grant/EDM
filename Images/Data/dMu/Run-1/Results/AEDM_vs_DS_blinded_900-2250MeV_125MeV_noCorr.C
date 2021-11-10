void AEDM_vs_DS_blinded_900-2250MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:31:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-7.894552e-22,4.75,2.019721e-19);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1050[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1050[4] = {
   1.345751e-19,
   6.607396e-20,
   1.461629e-19,
   1.253983e-19};
   Double_t _fex1050[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1050[4] = {
   2.666246e-20,
   2.277456e-20,
   1.866888e-20,
   1.361949e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1050,_fy1050,_fex1050,_fey1050);
   gre->SetName("");
   gre->SetTitle(";;d_{#mu}^{BLIND} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10461050 = new TH1F("Graph_Graph_Graph10461050","",100,0.7,4.3);
   Graph_Graph_Graph10461050->SetMinimum(1.94867e-20);
   Graph_Graph_Graph10461050->SetMaximum(1.816959e-19);
   Graph_Graph_Graph10461050->SetDirectory(0);
   Graph_Graph_Graph10461050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10461050->SetLineColor(ci);
   Graph_Graph_Graph10461050->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10461050->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10461050->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10461050->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10461050->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10461050->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10461050->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10461050->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10461050->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10461050->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10461050->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10461050->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10461050->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10461050->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10461050->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10461050->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10461050->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10461050->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10461050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10461050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10461050);
   
   gre->Draw("ap");
   
   TF1 *fit1050 = new TF1("fit","pol0",0,5, TF1::EAddToList::kDefault);
   fit1050->SetFillColor(19);
   fit1050->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   fit1050->SetLineColor(ci);
   fit1050->SetLineWidth(1);
   fit1050->GetXaxis()->SetLabelFont(42);
   fit1050->GetXaxis()->SetTitleOffset(1);
   fit1050->GetXaxis()->SetTitleFont(42);
   fit1050->GetYaxis()->SetLabelFont(42);
   fit1050->GetYaxis()->SetTitleFont(42);
   fit1050->SetParameter(0,1.205359e-19);
   fit1050->SetParError(0,6.750822e-21);
   fit1050->SetParLimits(0,0,0);
   fit1050->Draw("same");
   
   TF1 *shift_-11051 = new TF1("shift_-1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_-11051->SetFillColor(19);
   shift_-11051->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_-11051->SetLineColor(ci);
   shift_-11051->SetLineWidth(2);
   shift_-11051->SetLineStyle(2);
   shift_-11051->GetXaxis()->SetLabelFont(42);
   shift_-11051->GetXaxis()->SetTitleOffset(1);
   shift_-11051->GetXaxis()->SetTitleFont(42);
   shift_-11051->GetYaxis()->SetLabelFont(42);
   shift_-11051->GetYaxis()->SetTitleFont(42);
   shift_-11051->SetParameter(0,1.137851e-19);
   shift_-11051->SetParError(0,0);
   shift_-11051->SetParLimits(0,0,0);
   shift_-11051->Draw("same");
   
   TF1 *shift_11052 = new TF1("shift_1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_11052->SetFillColor(19);
   shift_11052->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_11052->SetLineColor(ci);
   shift_11052->SetLineWidth(2);
   shift_11052->SetLineStyle(2);
   shift_11052->GetXaxis()->SetLabelFont(42);
   shift_11052->GetXaxis()->SetTitleOffset(1);
   shift_11052->GetXaxis()->SetTitleFont(42);
   shift_11052->GetYaxis()->SetLabelFont(42);
   shift_11052->GetYaxis()->SetTitleFont(42);
   shift_11052->SetParameter(0,1.272867e-19);
   shift_11052->SetParError(0,0);
   shift_11052->SetParLimits(0,0,0);
   shift_11052->Draw("same");
   
   Double_t _fx1051[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1051[4] = {
   1.345751e-19,
   6.607396e-20,
   1.461629e-19,
   1.253983e-19};
   Double_t _fex1051[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1051[4] = {
   2.666246e-20,
   2.277456e-20,
   1.866888e-20,
   1.361949e-20};
   gre = new TGraphErrors(4,_fx1051,_fy1051,_fex1051,_fey1051);
   gre->SetName("");
   gre->SetTitle(";;d_{#mu}^{BLIND} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph104610501051 = new TH1F("Graph_Graph_Graph_Graph104610501051","",100,0.7,4.3);
   Graph_Graph_Graph_Graph104610501051->SetMinimum(1.94867e-20);
   Graph_Graph_Graph_Graph104610501051->SetMaximum(1.816959e-19);
   Graph_Graph_Graph_Graph104610501051->SetDirectory(0);
   Graph_Graph_Graph_Graph104610501051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph104610501051->SetLineColor(ci);
   Graph_Graph_Graph_Graph104610501051->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph_Graph104610501051->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph_Graph104610501051->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph_Graph104610501051->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph_Graph104610501051->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph104610501051->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph104610501051->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph104610501051->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph104610501051->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph104610501051->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph104610501051->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph_Graph104610501051->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph104610501051->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph104610501051->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph104610501051->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph104610501051->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph104610501051->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph104610501051->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph104610501051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph104610501051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph104610501051);
   
   gre->Draw("p ");
   
   Double_t _fx1052[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1052[4] = {
   6.131629e-20,
   9.426908e-20,
   1.520969e-19,
   1.262109e-19};
   Double_t _fex1052[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1052[4] = {
   2.788639e-20,
   2.385224e-20,
   1.973266e-20,
   1.452874e-20};
   gre = new TGraphErrors(4,_fx1052,_fy1052,_fex1052,_fey1052);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10471052 = new TH1F("Graph_Graph_Graph10471052","S18",100,0.7,4.3);
   Graph_Graph_Graph10471052->SetMinimum(1.958993e-20);
   Graph_Graph_Graph10471052->SetMaximum(1.856695e-19);
   Graph_Graph_Graph10471052->SetDirectory(0);
   Graph_Graph_Graph10471052->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10471052->SetLineColor(ci);
   Graph_Graph_Graph10471052->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10471052->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10471052->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10471052->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10471052->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10471052->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10471052->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10471052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10471052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10471052->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10471052->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10471052->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10471052->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10471052->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10471052->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10471052->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10471052->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10471052->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10471052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10471052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10471052);
   
   gre->Draw("p ");
   
   Double_t _fx1053[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1053[4] = {
   9.990141e-20,
   7.945913e-20,
   1.488949e-19,
   1.257439e-19};
   Double_t _fex1053[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1053[4] = {
   1.927269e-20,
   1.647256e-20,
   1.356184e-20,
   9.936662e-21};
   gre = new TGraphErrors(4,_fx1053,_fy1053,_fex1053,_fey1053);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10481053 = new TH1F("Graph_Graph_Graph10481053","S12S18",100,0.7,4.3);
   Graph_Graph_Graph10481053->SetMinimum(5.303955e-20);
   Graph_Graph_Graph10481053->SetMaximum(1.724038e-19);
   Graph_Graph_Graph10481053->SetDirectory(0);
   Graph_Graph_Graph10481053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10481053->SetLineColor(ci);
   Graph_Graph_Graph10481053->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10481053->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10481053->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10481053->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10481053->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10481053->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10481053->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10481053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10481053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10481053->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10481053->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10481053->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10481053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10481053->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10481053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10481053->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10481053->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10481053->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10481053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10481053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10481053);
   
   
   TF1 *pol01054 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01054->SetFillColor(19);
   pol01054->SetFillStyle(0);
   pol01054->SetLineColor(2);
   pol01054->SetLineWidth(0);
   pol01054->SetChisquare(12.01196);
   pol01054->SetNDF(3);
   pol01054->GetXaxis()->SetLabelFont(42);
   pol01054->GetXaxis()->SetTitleOffset(1);
   pol01054->GetXaxis()->SetTitleFont(42);
   pol01054->GetYaxis()->SetLabelFont(42);
   pol01054->GetYaxis()->SetTitleFont(42);
   pol01054->SetParameter(0,1.205359e-19);
   pol01054->SetParError(0,6.750822e-21);
   pol01054->SetParLimits(0,0,0);
   pol01054->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01054);
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.91,0.8,0.99,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","S12 & S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
