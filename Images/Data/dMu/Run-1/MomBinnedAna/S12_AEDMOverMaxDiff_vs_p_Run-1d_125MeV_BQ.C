void S12_AEDMOverMaxDiff_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8389,-0.1850356,3033.522,0.03212977);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1071[22] = {
   367.2236,
   456.6639,
   570.2517,
   695.0627,
   815.9831,
   938.554,
   1062.655,
   1188.287,
   1312.788,
   1435.9,
   1561.968,
   1685.267,
   1810.602,
   1935.128,
   2060.285,
   2185.022,
   2309.141,
   2432.952,
   2559.541,
   2679.196,
   2781.12,
   2886.415};
   Double_t Graph0_fy1071[22] = {
   0.01316953,
   -0.003309536,
   0.002529984,
   0.0006888352,
   0.001468274,
   0.00145139,
   0.002532407,
   0.001843275,
   0.003650566,
   0.001989836,
   0.003419799,
   0.003786748,
   0.003186228,
   0.003483182,
   0.002538684,
   0.005799882,
   0.004065117,
   0.004402009,
   0.008697835,
   0.003450586,
   -0.006147062,
   -0.360233};
   Double_t Graph0_fex1071[22] = {
   0.15529,
   0.07767284,
   0.05215712,
   0.03528341,
   0.02828885,
   0.02549312,
   0.02417555,
   0.02334841,
   0.02364677,
   0.02371021,
   0.02546434,
   0.02672193,
   0.02997394,
   0.03283023,
   0.03742638,
   0.0412261,
   0.04755622,
   0.05709664,
   0.06850077,
   0.07809568,
   0.1560077,
   0.9305664};
   Double_t Graph0_fey1071[22] = {
   0.0350802,
   -0.003630001,
   0.002087782,
   0.001418662,
   0.001118954,
   0.0009991812,
   0.0009533998,
   0.0009236077,
   0.0009256803,
   0.0009364001,
   0.0009995216,
   0.001054648,
   0.001175344,
   0.001293934,
   0.001468166,
   0.001626299,
   0.001869504,
   0.002251066,
   0.002694043,
   0.003247793,
   -0.008578261,
   -0.06578798};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1071,Graph0_fy1071,Graph0_fex1071,Graph0_fey1071);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01071 = new TH1F("Graph_Graph01071","S12",100,115.0406,3139.374);
   Graph_Graph01071->SetMinimum(-0.163319);
   Graph_Graph01071->SetMaximum(0.01041323);
   Graph_Graph01071->SetDirectory(0);
   Graph_Graph01071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01071->SetLineColor(ci);
   Graph_Graph01071->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01071->GetXaxis()->SetRange(21,88);
   Graph_Graph01071->GetXaxis()->CenterTitle(true);
   Graph_Graph01071->GetXaxis()->SetLabelFont(42);
   Graph_Graph01071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01071->GetXaxis()->SetTitleFont(42);
   Graph_Graph01071->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01071->GetYaxis()->CenterTitle(true);
   Graph_Graph01071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01071->GetYaxis()->SetLabelFont(42);
   Graph_Graph01071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01071->GetYaxis()->SetTitleFont(42);
   Graph_Graph01071->GetZaxis()->SetLabelFont(42);
   Graph_Graph01071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01071);
   
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
