void S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7144,-0.3056323,3408.481,1.53939);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1133[11] = {
   451.8866,
   653.0027,
   880.3991,
   1123.088,
   1370.685,
   1619.419,
   1866.328,
   2114.37,
   2363.365,
   2613.147,
   2788.635};
   Double_t Graph0_fy1133[11] = {
   0.320575,
   0.02594574,
   -0.01319257,
   0.01280835,
   0.007305946,
   -0.001535085,
   0.02504177,
   -0.002451685,
   0.01088772,
   0.04315316,
   -0.01311088};
   Double_t Graph0_fex1133[11] = {
   0.1946554,
   0.1660176,
   0.1206834,
   0.1185338,
   0.1274588,
   0.1424419,
   0.1680339,
   0.2132611,
   0.2821374,
   0.3382844,
   0.4388311};
   Double_t Graph0_fey1133[11] = {
   0.2597625,
   0.08737817,
   0.05041914,
   0.04172029,
   0.03861946,
   0.03744563,
   0.03798941,
   0.04126286,
   0.04620494,
   0.0470283,
   0.1158245};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1133,Graph0_fy1133,Graph0_fex1133,Graph0_fey1133);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01133 = new TH1F("Graph_Graph01133","S18_",100,217.9537,3022.812);
   Graph_Graph01133->SetMinimum(-0.1211301);
   Graph_Graph01133->SetMaximum(1.354887);
   Graph_Graph01133->SetDirectory(0);
   Graph_Graph01133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01133->SetLineColor(ci);
   Graph_Graph01133->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01133->GetXaxis()->SetRange(0,101);
   Graph_Graph01133->GetXaxis()->CenterTitle(true);
   Graph_Graph01133->GetXaxis()->SetLabelFont(42);
   Graph_Graph01133->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01133->GetXaxis()->SetTitleFont(42);
   Graph_Graph01133->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01133->GetYaxis()->CenterTitle(true);
   Graph_Graph01133->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01133->GetYaxis()->SetLabelFont(42);
   Graph_Graph01133->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01133->GetYaxis()->SetTitleFont(42);
   Graph_Graph01133->GetZaxis()->SetLabelFont(42);
   Graph_Graph01133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01133);
   
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
