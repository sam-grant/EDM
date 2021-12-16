void S18_AEDMOverMaxDiff_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:17:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.5205,-0.03325305,3027.918,0.02082341);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1126[22] = {
   367.0173,
   457.2104,
   570.0374,
   694.4612,
   815.6827,
   938.5171,
   1062.885,
   1188.2,
   1312.605,
   1435.72,
   1562.001,
   1685.025,
   1810.514,
   1934.906,
   2060.262,
   2184.773,
   2308.971,
   2433.427,
   2559.674,
   2677.991,
   2781.684,
   2884.375};
   Double_t Graph0_fy1126[22] = {
   -0.05282821,
   0.003429837,
   0.001858856,
   0.003536602,
   0.002183374,
   0.003693463,
   0.00422134,
   0.004399501,
   0.0001157205,
   0.003505719,
   0.003122304,
   0.004985365,
   0.002405374,
   0.007498154,
   0.00772097,
   0.003283744,
   0.00743105,
   0.001011273,
   0.01286881,
   0.004757467,
   0.01114292,
   -0.06977171};
   Double_t Graph0_fex1126[22] = {
   0.2151465,
   0.1079987,
   0.0715069,
   0.05014894,
   0.04063452,
   0.03685518,
   0.03488971,
   0.03392339,
   0.03470107,
   0.03500905,
   0.03780692,
   0.04004255,
   0.04550979,
   0.04999256,
   0.05762843,
   0.06384773,
   0.07415466,
   0.08977885,
   0.1061248,
   0.1233522,
   0.2631774,
   1.230174};
   Double_t Graph0_fey1126[22] = {
   -0.04555832,
   0.005041721,
   0.002858684,
   0.002005006,
   0.001608989,
   0.001445911,
   0.001377895,
   0.001339318,
   0.001356239,
   0.00138282,
   0.001483454,
   0.001582505,
   0.001788309,
   0.00197055,
   0.002255527,
   0.002516227,
   0.002918433,
   0.003525933,
   0.004168388,
   0.005140139,
   0.01442462,
   -0.1413377};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1126,Graph0_fy1126,Graph0_fex1126,Graph0_fey1126);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01126 = new TH1F("Graph_Graph01126","S18",100,114.9218,3137.486);
   Graph_Graph01126->SetMinimum(-0.0278454);
   Graph_Graph01126->SetMaximum(0.01541577);
   Graph_Graph01126->SetDirectory(0);
   Graph_Graph01126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01126->SetLineColor(ci);
   Graph_Graph01126->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01126->GetXaxis()->SetRange(22,88);
   Graph_Graph01126->GetXaxis()->CenterTitle(true);
   Graph_Graph01126->GetXaxis()->SetLabelFont(42);
   Graph_Graph01126->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01126->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01126->GetXaxis()->SetTitleFont(42);
   Graph_Graph01126->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01126->GetYaxis()->CenterTitle(true);
   Graph_Graph01126->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01126->GetYaxis()->SetLabelFont(42);
   Graph_Graph01126->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01126->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01126->GetYaxis()->SetTitleFont(42);
   Graph_Graph01126->GetZaxis()->SetLabelFont(42);
   Graph_Graph01126->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01126);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
