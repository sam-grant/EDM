void S12_AEDMOverMaxDiff_vs_p_Run-1b_250MeV_1000_2500MeV_randomised_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 15:14:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.7988,0.0003379308,2703.417,0.005414394);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[11] = {
   455.8613,
   655.7479,
   884.3259,
   1127.626,
   1373.621,
   1620.285,
   1867.089,
   2116.434,
   2359.734,
   2607.778,
   2781.059};
   Double_t Graph0_fy1049[11] = {
   0.01047771,
   0.005818313,
   0.002635752,
   0.001051541,
   0.00161425,
   0.001647729,
   0.001602004,
   0.00246984,
   0.004091336,
   0.001873021,
   0.02818448};
   Double_t Graph0_fex1049[11] = {
   0.1345946,
   0.09489918,
   0.06258617,
   0.0567749,
   0.05548528,
   0.06097837,
   0.07342504,
   0.09176803,
   0.1190434,
   0.1664659,
   0.265778};
   Double_t Graph0_fey1049[11] = {
   0.00609376,
   0.001985759,
   0.001253655,
   0.001113212,
   0.001102243,
   0.001212165,
   0.00145208,
   0.001810856,
   0.002387459,
   0.003447493,
   0.01448178};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","S12",100,223.1668,3013.885);
   Graph_Graph01049->SetMinimum(0.0008455771);
   Graph_Graph01049->SetMaximum(0.004906748);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01049->GetXaxis()->SetRange(28,82);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
