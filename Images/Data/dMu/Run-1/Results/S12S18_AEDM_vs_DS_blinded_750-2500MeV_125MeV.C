void S12S18_AEDM_vs_DS_blinded_750-2500MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  2 14:45:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.35,8.13082e-19,4.85,2.449011e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1012[4] = {
   1.1,
   2.1,
   3.1,
   4.1};
   Double_t _fy1012[4] = {
   1.421268e-18,
   1.296333e-18,
   1.986984e-18,
   1.71821e-18};
   Double_t _fex1012[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1012[4] = {
   2.443132e-19,
   2.105962e-19,
   1.893723e-19,
   1.471501e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1012,_fy1012,_fex1012,_fey1012);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","S12S18",100,0.8,4.4);
   Graph_Graph1012->SetMinimum(9.76675e-19);
   Graph_Graph1012->SetMaximum(2.285418e-18);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetBinLabel(6,"Run-1a");
   Graph_Graph1012->GetXaxis()->SetBinLabel(34,"Run-1b");
   Graph_Graph1012->GetXaxis()->SetBinLabel(62,"Run-1c");
   Graph_Graph1012->GetXaxis()->SetBinLabel(89,"Run-1d");
   Graph_Graph1012->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1012->GetXaxis()->CenterTitle(true);
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph1012->GetYaxis()->CenterTitle(true);
   Graph_Graph1012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1012->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
   
   TF1 *pol01013 = new TF1("pol0","pol0",0.8,4.4, TF1::EAddToList::kNo);
   pol01013->SetFillColor(19);
   pol01013->SetFillStyle(0);
   pol01013->SetLineColor(2);
   pol01013->SetLineWidth(2);
   pol01013->SetChisquare(7.07335);
   pol01013->SetNDF(3);
   pol01013->GetXaxis()->SetLabelFont(42);
   pol01013->GetXaxis()->SetTitleOffset(1);
   pol01013->GetXaxis()->SetTitleFont(42);
   pol01013->GetYaxis()->SetLabelFont(42);
   pol01013->GetYaxis()->SetTitleFont(42);
   pol01013->SetParameter(0,1.656532e-18);
   pol01013->SetParError(0,9.391906e-20);
   pol01013->SetParLimits(0,0,0);
   pol01013->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01013);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
