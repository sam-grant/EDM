void S12_AEDMOverMaxDiff_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:59:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8277,-0.02279906,2731.307,0.02480969);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1026[22] = {
   367.0259,
   456.9839,
   570.3007,
   695.1502,
   816.0454,
   938.5665,
   1062.78,
   1188.405,
   1312.663,
   1436.01,
   1561.941,
   1685.362,
   1810.625,
   1935.174,
   2060.292,
   2185.104,
   2309.112,
   2432.873,
   2559.58,
   2678.767,
   2780.783,
   2890.136};
   Double_t Graph0_fy1026[22] = {
   0.008903114,
   0.0005746626,
   0.0003196121,
   0.000278811,
   1.982079e-05,
   9.209031e-05,
   0.0001134673,
   0.0002868837,
   0.0004012389,
   0.0002778489,
   0.0002258189,
   0.0004507633,
   0.0004213763,
   0.0004746779,
   0.0004385394,
   0.0001859697,
   0.00080352,
   -3.932022e-05,
   0.001011043,
   0.000410582,
   -0.0001502847,
   -0.01486427};
   Double_t Graph0_fex1026[22] = {
   0.22722,
   0.108819,
   0.0727687,
   0.04940617,
   0.03927278,
   0.03533284,
   0.03345619,
   0.03240199,
   0.03270933,
   0.03281037,
   0.03524654,
   0.03696425,
   0.04148184,
   0.04530472,
   0.05170377,
   0.05715965,
   0.06567884,
   0.07884463,
   0.09497755,
   0.1087666,
   0.2163104,
   1.498282};
   Double_t Graph0_fey1026[22] = {
   0.007971781,
   0.0004788144,
   0.000261683,
   0.0001869182,
   0.00014012,
   0.000121376,
   0.0001208395,
   0.0001081244,
   0.0001014582,
   0.00011983,
   9.149555e-05,
   0.0001494745,
   0.0001343682,
   0.0001703356,
   0.000206005,
   0.0002139306,
   0.000235906,
   -0.0003366647,
   0.0003751898,
   0.0005099314,
   -0.001301255,
   -0.02417275};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01026 = new TH1F("Graph_Graph01026","S12",100,114.3151,3144.118);
   Graph_Graph01026->SetMinimum(-0.01803819);
   Graph_Graph01026->SetMaximum(0.02004881);
   Graph_Graph01026->SetDirectory(0);
   Graph_Graph01026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01026->SetLineColor(ci);
   Graph_Graph01026->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01026->GetXaxis()->SetRange(21,79);
   Graph_Graph01026->GetXaxis()->CenterTitle(true);
   Graph_Graph01026->GetXaxis()->SetLabelFont(42);
   Graph_Graph01026->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01026->GetXaxis()->SetTitleFont(42);
   Graph_Graph01026->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01026->GetYaxis()->CenterTitle(true);
   Graph_Graph01026->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01026->GetYaxis()->SetLabelFont(42);
   Graph_Graph01026->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01026->GetYaxis()->SetTitleFont(42);
   Graph_Graph01026->GetZaxis()->SetLabelFont(42);
   Graph_Graph01026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01026);
   
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
