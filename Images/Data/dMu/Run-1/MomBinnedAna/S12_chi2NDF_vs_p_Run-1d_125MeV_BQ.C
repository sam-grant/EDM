void S12_chi2NDF_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8389,-0.1019869,3033.522,4.594462);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[22] = {
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
   Double_t Graph0_fy1064[22] = {
   0.5255354,
   1.023455,
   1.383533,
   0.6785801,
   1.271025,
   0.9719559,
   0.8269031,
   1.215044,
   1.02621,
   1.354748,
   0.8813946,
   0.9580653,
   0.8791984,
   0.4550196,
   0.5719733,
   1.187401,
   0.876452,
   1.484104,
   0.8241839,
   0.6196441,
   0.8392538,
   5.485417};
   Double_t Graph0_fex1064[22] = {
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
   Double_t Graph0_fey1064[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1064,Graph0_fy1064,Graph0_fex1064,Graph0_fey1064);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S12",100,115.0406,3139.374);
   Graph_Graph01064->SetMinimum(0.3676581);
   Graph_Graph01064->SetMaximum(4.124817);
   Graph_Graph01064->SetDirectory(0);
   Graph_Graph01064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01064->SetLineColor(ci);
   Graph_Graph01064->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01064->GetXaxis()->SetRange(21,88);
   Graph_Graph01064->GetXaxis()->CenterTitle(true);
   Graph_Graph01064->GetXaxis()->SetLabelFont(42);
   Graph_Graph01064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01064->GetXaxis()->SetTitleFont(42);
   Graph_Graph01064->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_Graph01064->GetYaxis()->CenterTitle(true);
   Graph_Graph01064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01064->GetYaxis()->SetLabelFont(42);
   Graph_Graph01064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01064->GetYaxis()->SetTitleFont(42);
   Graph_Graph01064->GetZaxis()->SetLabelFont(42);
   Graph_Graph01064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01064);
   
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
