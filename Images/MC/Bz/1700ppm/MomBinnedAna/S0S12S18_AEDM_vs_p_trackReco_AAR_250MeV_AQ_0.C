void S0S12S18_AEDM_vs_p_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:38:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.7918,-2.433,2724.913,0.5992806);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1066[12] = {
   175.5011,
   432.6819,
   628.4305,
   872.9878,
   1121.709,
   1371.415,
   1620.444,
   1868.437,
   2116.692,
   2363.489,
   2614.071,
   2826.668};
   Double_t Graph0_fy1066[12] = {
   -0.9446012,
   0.02409835,
   0.04889943,
   0.06085237,
   0.06278614,
   0.06962574,
   -0.03926907,
   0.0273063,
   0.01866236,
   0.06881489,
   0.008180766,
   -0.00121088};
   Double_t Graph0_fex1066[12] = {
   0.7346054,
   0.06958278,
   0.06266495,
   0.06301679,
   0.06768264,
   0.0732617,
   0.0805583,
   0.09218842,
   0.1097524,
   0.1383511,
   0.1809549,
   0.2191293};
   Double_t Graph0_fey1066[12] = {
   0.9830185,
   0.06980219,
   0.03478553,
   0.02851918,
   0.02580758,
   0.02376014,
   0.02246745,
   0.02197236,
   0.02229773,
   0.02359525,
   0.02386921,
   0.02852324};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1066,Graph0_fy1066,Graph0_fex1066,Graph0_fey1066);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01066 = new TH1F("Graph_Graph01066","S0S12S18_",100,0,3092.099);
   Graph_Graph01066->SetMinimum(-2.129772);
   Graph_Graph01066->SetMaximum(0.2960526);
   Graph_Graph01066->SetDirectory(0);
   Graph_Graph01066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01066->SetLineColor(ci);
   Graph_Graph01066->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01066->GetXaxis()->SetRange(25,81);
   Graph_Graph01066->GetXaxis()->CenterTitle(true);
   Graph_Graph01066->GetXaxis()->SetLabelFont(42);
   Graph_Graph01066->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01066->GetXaxis()->SetTitleFont(42);
   Graph_Graph01066->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01066->GetYaxis()->CenterTitle(true);
   Graph_Graph01066->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01066->GetYaxis()->SetLabelFont(42);
   Graph_Graph01066->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01066->GetYaxis()->SetTitleFont(42);
   Graph_Graph01066->GetZaxis()->SetLabelFont(42);
   Graph_Graph01066->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01066);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
