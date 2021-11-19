void S18_AEDMOverMaxDiff_vs_p_trackTruth_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:38:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-301.4644,-0.03115737,3331.568,0.01328857);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1076[12] = {
   201.4826,
   433.6373,
   628.5893,
   873.0583,
   1121.633,
   1371.44,
   1620.022,
   1867.892,
   2115.773,
   2363.227,
   2613.952,
   2828.757};
   Double_t Graph0_fy1076[12] = {
   -0.02374971,
   0.000248082,
   0.001298495,
   0.0009452499,
   0.001989181,
   0.002076191,
   0.002570652,
   0.002934798,
   0.003060096,
   0.002969062,
   0.00508312,
   0.003372589};
   Double_t Graph0_fex1076[12] = {
   1.86628,
   0.06961119,
   0.0636093,
   0.06389998,
   0.06862853,
   0.07422075,
   0.08181962,
   0.09423555,
   0.1140065,
   0.1472118,
   0.1894361,
   0.2470347};
   Double_t Graph0_fey1076[12] = {
   -0.005345718,
   0.0003347065,
   0.0002269161,
   0.0002346709,
   0.0002621022,
   0.0002936574,
   0.0003358754,
   0.0003849258,
   0.000457736,
   0.0005745388,
   0.000797797,
   0.001331023};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1076,Graph0_fy1076,Graph0_fex1076,Graph0_fey1076);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01076 = new TH1F("Graph_Graph01076","S18_",100,0,3091.942);
   Graph_Graph01076->SetMinimum(-0.02671278);
   Graph_Graph01076->SetMaximum(0.00884398);
   Graph_Graph01076->SetDirectory(0);
   Graph_Graph01076->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01076->SetLineColor(ci);
   Graph_Graph01076->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01076->GetXaxis()->SetRange(3,96);
   Graph_Graph01076->GetXaxis()->CenterTitle(true);
   Graph_Graph01076->GetXaxis()->SetLabelFont(42);
   Graph_Graph01076->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01076->GetXaxis()->SetTitleFont(42);
   Graph_Graph01076->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01076->GetYaxis()->CenterTitle(true);
   Graph_Graph01076->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01076->GetYaxis()->SetLabelFont(42);
   Graph_Graph01076->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01076->GetYaxis()->SetTitleFont(42);
   Graph_Graph01076->GetZaxis()->SetLabelFont(42);
   Graph_Graph01076->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01076);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
