void S12S18_Ag2_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.8227,-3.916321,2722.442,3.341956);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[22] = {
   367.2033,
   457.0147,
   570.1003,
   694.7422,
   815.8159,
   938.5085,
   1062.735,
   1188.193,
   1312.674,
   1435.759,
   1561.971,
   1685.095,
   1810.525,
   1934.999,
   2060.258,
   2184.864,
   2309.08,
   2433.07,
   2559.684,
   2678.57,
   2781.109,
   2885.371};
   Double_t Graph0_fy1035[22] = {
   -1.497482,
   0.0143016,
   0.06380271,
   0.01492936,
   -0.0008407248,
   0.00207807,
   0.02718634,
   0.0002639365,
   -0.0009509494,
   -0.03279337,
   0.0005933682,
   0.0009865404,
   0.01386068,
   0.00930895,
   0.01652548,
   -0.03564338,
   0.007275822,
   -0.01016132,
   0.01660608,
   -0.04710791,
   -0.03299602,
   1.748015};
   Double_t Graph0_fex1035[22] = {
   0.1223124,
   0.06036459,
   0.04024824,
   0.0277788,
   0.02243236,
   0.02027873,
   0.01924623,
   0.01865073,
   0.01899693,
   0.01911444,
   0.02059145,
   0.0217368,
   0.02457288,
   0.02694885,
   0.0308822,
   0.03415244,
   0.03960077,
   0.04777372,
   0.05698453,
   0.06530988,
   0.133844,
   0.8128393};
   Double_t Graph0_fey1035[22] = {
   1.209126,
   0.1140012,
   0.05544949,
   0.03356331,
   0.02338483,
   0.01928079,
   0.01696353,
   0.01536349,
   0.01447682,
   0.01372767,
   0.01375118,
   0.01333512,
   0.01388889,
   0.01402005,
   0.01469114,
   0.01493908,
   0.01568401,
   0.01688992,
   0.01785912,
   0.01925748,
   0.04720558,
   0.3842284};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","S12S18",100,115.1707,3138.094);
   Graph_Graph01035->SetMinimum(-3.190493);
   Graph_Graph01035->SetMaximum(2.616129);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01035->GetXaxis()->SetRange(22,79);
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
