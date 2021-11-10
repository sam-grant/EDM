void S12_AEDMOverMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 09:18:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-0.377579,2727,0.09387363);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1026[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1026[22] = {
   0.003128081,
   0.001363021,
   0.001077056,
   0.0002329774,
   0.000310346,
   8.538395e-05,
   0.000258794,
   -0.0001187334,
   0.0003899045,
   -7.484553e-05,
   0.0001387104,
   0.0001296241,
   6.528562e-05,
   0.000403255,
   0.0004293079,
   0.0002253386,
   0.0008467393,
   0.0006245126,
   -2.096259e-05,
   0.0004764249,
   0.00286554,
   -0.2990035};
   Double_t Graph0_fex1026[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1026[22] = {
   0.01217012,
   0.0006131143,
   0.0003277816,
   0.0002169068,
   0.0001649899,
   0.0001629676,
   0.0001244244,
   -0.0001306526,
   0.0001530281,
   -0.0001264436,
   0.0001727904,
   0.000195821,
   0.0001873473,
   0.0002358034,
   0.0002509505,
   0.0002657463,
   0.0003942347,
   0.0004079137,
   -0.0005202055,
   0.0006096951,
   0.001416731,
   -0.1097127};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01026 = new TH1F("Graph_Graph01026","S12",100,49.5,3199.5);
   Graph_Graph01026->SetMinimum(-0.3304337);
   Graph_Graph01026->SetMaximum(0.04672837);
   Graph_Graph01026->SetDirectory(0);
   Graph_Graph01026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01026->SetLineColor(ci);
   Graph_Graph01026->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01026->GetXaxis()->SetRange(23,78);
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
