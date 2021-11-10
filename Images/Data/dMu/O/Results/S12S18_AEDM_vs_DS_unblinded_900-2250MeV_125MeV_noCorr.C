void S12S18_AEDM_vs_DS_unblinded_900-2250MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:31:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-1.309379e-19,4.75,5.932265e-20);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1066[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1066[4] = {
   -6.843581e-20,
   1.317822e-21,
   -2.569984e-20,
   -4.090498e-20};
   Double_t _fex1066[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1066[4] = {
   3.079202e-20,
   2.629473e-20,
   2.169204e-20,
   1.59384e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1066,_fy1066,_fex1066,_fey1066);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1066 = new TH1F("Graph_Graph1066","S12S18",100,0.7,4.3);
   Graph_Graph1066->SetMinimum(-1.119119e-19);
   Graph_Graph1066->SetMaximum(4.029659e-20);
   Graph_Graph1066->SetDirectory(0);
   Graph_Graph1066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1066->SetLineColor(ci);
   Graph_Graph1066->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1066->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1066->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1066->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1066->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1066->GetXaxis()->CenterTitle(true);
   Graph_Graph1066->GetXaxis()->SetLabelFont(42);
   Graph_Graph1066->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1066->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1066->GetXaxis()->SetTitleFont(42);
   Graph_Graph1066->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
   Graph_Graph1066->GetYaxis()->CenterTitle(true);
   Graph_Graph1066->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1066->GetYaxis()->SetLabelFont(42);
   Graph_Graph1066->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1066->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1066->GetYaxis()->SetTitleFont(42);
   Graph_Graph1066->GetZaxis()->SetLabelFont(42);
   Graph_Graph1066->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1066);
   
   
   TF1 *pol01067 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01067->SetFillColor(19);
   pol01067->SetFillStyle(0);
   pol01067->SetLineColor(2);
   pol01067->SetLineWidth(2);
   pol01067->SetChisquare(3.385648);
   pol01067->SetNDF(3);
   pol01067->GetXaxis()->SetLabelFont(42);
   pol01067->GetXaxis()->SetTitleOffset(1);
   pol01067->GetXaxis()->SetTitleFont(42);
   pol01067->GetYaxis()->SetLabelFont(42);
   pol01067->GetYaxis()->SetTitleFont(42);
   pol01067->SetParameter(0,-3.339042e-20);
   pol01067->SetParError(0,1.080674e-20);
   pol01067->SetParLimits(0,0,0);
   pol01067->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01067);
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
