void S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.314,-0.008307954,3406.951,0.0005517875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1181[11] = {
   451.9422,
   653.2273,
   880.2966,
   1123.19,
   1371.008,
   1619.961,
   1866.763,
   2115.03,
   2362.81,
   2613.821,
   2787.502};
   Double_t Graph0_fy1181[11] = {
   -0.0006409212,
   -0.0002725831,
   -0.0007963525,
   -0.000740017,
   -0.001275154,
   -0.00135795,
   -0.001601102,
   -0.001581166,
   -0.001202318,
   -0.002546776,
   -0.004475239};
   Double_t Graph0_fex1181[11] = {
   0.1840185,
   0.154634,
   0.1118548,
   0.1091122,
   0.1164788,
   0.1292152,
   0.1512967,
   0.189677,
   0.2474458,
   0.3009601,
   0.3776506};
   Double_t Graph0_fey1181[11] = {
   -0.001371079,
   -0.0005253055,
   -0.0003742566,
   -0.0003634995,
   -0.000369915,
   -0.0004349536,
   -0.0004958173,
   -0.0005458877,
   -0.0006973545,
   -0.0009974571,
   -0.003523389};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1181,Graph0_fy1181,Graph0_fex1181,Graph0_fey1181);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01181 = new TH1F("Graph_Graph01181","S12S18_",100,218.146,3021.491);
   Graph_Graph01181->SetMinimum(-0.00742198);
   Graph_Graph01181->SetMaximum(-0.0003341867);
   Graph_Graph01181->SetDirectory(0);
   Graph_Graph01181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01181->SetLineColor(ci);
   Graph_Graph01181->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01181->GetXaxis()->SetRange(0,101);
   Graph_Graph01181->GetXaxis()->CenterTitle(true);
   Graph_Graph01181->GetXaxis()->SetLabelFont(42);
   Graph_Graph01181->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01181->GetXaxis()->SetTitleFont(42);
   Graph_Graph01181->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01181->GetYaxis()->CenterTitle(true);
   Graph_Graph01181->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01181->GetYaxis()->SetLabelFont(42);
   Graph_Graph01181->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01181->GetYaxis()->SetTitleFont(42);
   Graph_Graph01181->GetZaxis()->SetLabelFont(42);
   Graph_Graph01181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01181);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
