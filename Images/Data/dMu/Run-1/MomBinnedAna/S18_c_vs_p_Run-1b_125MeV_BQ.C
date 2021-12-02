void S18_c_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 16:15:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.9393,-0.5310238,2726.713,0.4706618);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[22] = {
   367.4384,
   456.6742,
   569.9843,
   694.4365,
   815.6608,
   938.5888,
   1062.745,
   1187.919,
   1312.68,
   1435.613,
   1562.048,
   1684.958,
   1810.533,
   1934.893,
   2060.323,
   2184.82,
   2308.919,
   2433.329,
   2560.044,
   2678.053,
   2781.14,
   2885.139};
   Double_t Graph0_fy1028[22] = {
   10.08556,
   2.999348,
   2.347988,
   -0.1607604,
   0.1086351,
   0.3457331,
   -0.4391325,
   -0.4156665,
   -0.4801126,
   -0.362635,
   -0.2888147,
   -0.2042861,
   -0.1462793,
   -0.08509212,
   -0.08123917,
   -0.04817159,
   -0.03132848,
   -0.1038641,
   -0.06242205,
   -0.01734928,
   -0.2209809,
   0.08862374};
   Double_t Graph0_fex1028[22] = {
   0.2542597,
   0.1282116,
   0.08547603,
   0.05911733,
   0.04831604,
   0.04372754,
   0.04164599,
   0.04029718,
   0.04118659,
   0.04161464,
   0.04467129,
   0.04750509,
   0.05365686,
   0.05907108,
   0.06800638,
   0.07506477,
   0.08707378,
   0.1057475,
   0.124273,
   0.1422437,
   0.2927081,
   1.562872};
   Double_t Graph0_fey1028[22] = {
   1.405287,
   0.1309829,
   0.06424638,
   0.03920262,
   0.02749334,
   0.02270138,
   0.02000667,
   0.01808549,
   0.01708111,
   0.01629026,
   0.01623689,
   0.01586757,
   0.01656977,
   0.01690155,
   0.01790445,
   0.01830743,
   0.01937562,
   0.02122562,
   0.02263061,
   0.02506586,
   0.06477182,
   1.524997};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","S18",100,115.2323,3138.654);
   Graph_Graph01028->SetMinimum(-0.4308552);
   Graph_Graph01028->SetMaximum(0.3704932);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01028->GetXaxis()->SetRange(21,79);
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01028->GetYaxis()->CenterTitle(true);
   Graph_Graph01028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01028->GetYaxis()->SetLabelFont(42);
   Graph_Graph01028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01028->GetYaxis()->SetTitleFont(42);
   Graph_Graph01028->GetZaxis()->SetLabelFont(42);
   Graph_Graph01028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01028);
   
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
