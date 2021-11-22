void S12_AEDMOverMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:30:20 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.6994,-0.298415,2730.075,0.079248);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1026[22] = {
   366.9979,
   456.7467,
   570.2452,
   695.0474,
   815.9733,
   938.7135,
   1062.734,
   1188.27,
   1312.739,
   1435.93,
   1561.976,
   1685.237,
   1810.655,
   1935.236,
   2060.303,
   2185.135,
   2309.226,
   2432.987,
   2559.503,
   2679.174,
   2780.715,
   2888.448};
   Double_t Graph0_fy1026[22] = {
   0.004031988,
   0.001363237,
   0.001075583,
   0.0002298946,
   0.0003174463,
   9.911536e-05,
   0.0002661142,
   -0.0001141945,
   0.0003985793,
   -6.506679e-05,
   0.0001469564,
   0.0001453573,
   7.803428e-05,
   0.0004141509,
   0.0004590256,
   0.0002376128,
   0.0008522344,
   0.0006367926,
   -3.50267e-05,
   0.0004417614,
   0.002877896,
   -0.2354712};
   Double_t Graph0_fex1026[22] = {
   0.2632858,
   0.1313502,
   0.0889277,
   0.05996606,
   0.04796851,
   0.04307472,
   0.04092389,
   0.03946989,
   0.03984111,
   0.03998827,
   0.04282143,
   0.04494925,
   0.05029794,
   0.05500769,
   0.06267773,
   0.06901985,
   0.07946472,
   0.09532527,
   0.1141395,
   0.1308164,
   0.261301,
   1.874823};
   Double_t Graph0_fey1026[22] = {
   0.01227218,
   0.0006130857,
   0.0003277775,
   0.0002169052,
   0.0001649915,
   0.000162967,
   0.0001244249,
   -0.0001306536,
   0.0001530316,
   -0.0001249185,
   0.000172792,
   0.0001958256,
   0.0001873514,
   0.000235813,
   0.0002569699,
   0.0002657638,
   0.0003942249,
   0.0004079423,
   -0.0005201956,
   0.0006095168,
   0.001416066,
   -0.1150868};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01026 = new TH1F("Graph_Graph01026","S12",100,114.3759,3142.681);
   Graph_Graph01026->SetMinimum(-0.2606487);
   Graph_Graph01026->SetMaximum(0.0414817);
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
