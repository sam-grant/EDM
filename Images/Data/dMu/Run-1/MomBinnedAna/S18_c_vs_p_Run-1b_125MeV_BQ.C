void S18_c_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.9538,-0.4136874,3032.833,1.251166);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1116[22] = {
   367.4647,
   456.6802,
   569.9862,
   694.4449,
   815.659,
   938.5876,
   1062.735,
   1187.923,
   1312.68,
   1435.614,
   1562.043,
   1684.956,
   1810.525,
   1934.908,
   2060.307,
   2184.834,
   2308.907,
   2433.342,
   2560.022,
   2678.046,
   2781.107,
   2885.139};
   Double_t Graph0_fy1116[22] = {
   10.30021,
   3.174708,
   2.517759,
   0.007459556,
   0.2746943,
   0.5186049,
   -0.2658772,
   -0.2424493,
   -0.3104634,
   -0.1911809,
   -0.1170354,
   -0.03626553,
   0.02190333,
   0.08610123,
   0.09352978,
   0.1250971,
   0.1411818,
   0.07078016,
   0.1098477,
   0.1513995,
   -0.04665393,
   0.2727426};
   Double_t Graph0_fex1116[22] = {
   0.2514673,
   0.1273708,
   0.08493739,
   0.05873317,
   0.04801405,
   0.04344375,
   0.04138662,
   0.040042,
   0.04092898,
   0.04135305,
   0.0443921,
   0.04721054,
   0.05333354,
   0.05870275,
   0.06758977,
   0.07460287,
   0.08656381,
   0.1051569,
   0.1234849,
   0.141328,
   0.2910684,
   1.562872};
   Double_t Graph0_fey1116[22] = {
   1.392141,
   0.1301707,
   0.06383201,
   0.03896544,
   0.02732487,
   0.02255362,
   0.01987862,
   0.01797123,
   0.01697486,
   0.01618614,
   0.01613569,
   0.01576977,
   0.01647147,
   0.01679764,
   0.01779709,
   0.01819751,
   0.01926366,
   0.02109857,
   0.02247956,
   0.0249024,
   0.06447066,
   1.524998};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1116,Graph0_fy1116,Graph0_fex1116,Graph0_fey1116);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01116 = new TH1F("Graph_Graph01116","S18",100,115.2643,3138.651);
   Graph_Graph01116->SetMinimum(-0.247202);
   Graph_Graph01116->SetMaximum(1.084681);
   Graph_Graph01116->SetDirectory(0);
   Graph_Graph01116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01116->SetLineColor(ci);
   Graph_Graph01116->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01116->GetXaxis()->SetRange(21,88);
   Graph_Graph01116->GetXaxis()->CenterTitle(true);
   Graph_Graph01116->GetXaxis()->SetLabelFont(42);
   Graph_Graph01116->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01116->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01116->GetXaxis()->SetTitleFont(42);
   Graph_Graph01116->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01116->GetYaxis()->CenterTitle(true);
   Graph_Graph01116->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01116->GetYaxis()->SetLabelFont(42);
   Graph_Graph01116->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01116->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01116->GetYaxis()->SetTitleFont(42);
   Graph_Graph01116->GetZaxis()->SetLabelFont(42);
   Graph_Graph01116->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01116->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01116);
   
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
