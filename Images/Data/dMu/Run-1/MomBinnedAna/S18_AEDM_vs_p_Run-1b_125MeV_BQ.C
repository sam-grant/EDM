void S18_AEDM_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.9538,-0.2904962,3032.833,0.2853846);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1117[22] = {
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
   Double_t Graph0_fy1117[22] = {
   -0.1085684,
   0.226041,
   0.04183427,
   0.07169194,
   0.07839799,
   0.05888418,
   0.05349456,
   0.04582147,
   0.005954762,
   0.04902986,
   0.022693,
   0.008597639,
   0.005584067,
   0.01290326,
   0.07287918,
   -0.0003643285,
   0.05078712,
   0.03684145,
   0.03145599,
   -0.05070419,
   0.1924422,
   -0.6617799};
   Double_t Graph0_fex1117[22] = {
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
   Double_t Graph0_fey1117[22] = {
   2.026492,
   0.1833759,
   0.08987719,
   0.05493926,
   0.03861519,
   0.03195625,
   0.02815134,
   0.02543811,
   0.0240521,
   0.02293943,
   0.02284669,
   0.02228903,
   0.02321039,
   0.02361186,
   0.02487965,
   0.02522608,
   0.02641543,
   0.02854754,
   0.0298375,
   0.03211473,
   0.08139783,
   1.556894};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1117,Graph0_fy1117,Graph0_fex1117,Graph0_fey1117);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01117 = new TH1F("Graph_Graph01117","S18",100,115.2643,3138.651);
   Graph_Graph01117->SetMinimum(-0.2329081);
   Graph_Graph01117->SetMaximum(0.2277966);
   Graph_Graph01117->SetDirectory(0);
   Graph_Graph01117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01117->SetLineColor(ci);
   Graph_Graph01117->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01117->GetXaxis()->SetRange(21,88);
   Graph_Graph01117->GetXaxis()->CenterTitle(true);
   Graph_Graph01117->GetXaxis()->SetLabelFont(42);
   Graph_Graph01117->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01117->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01117->GetXaxis()->SetTitleFont(42);
   Graph_Graph01117->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01117->GetYaxis()->CenterTitle(true);
   Graph_Graph01117->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01117->GetYaxis()->SetLabelFont(42);
   Graph_Graph01117->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01117->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01117->GetYaxis()->SetTitleFont(42);
   Graph_Graph01117->GetZaxis()->SetLabelFont(42);
   Graph_Graph01117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01117);
   
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
