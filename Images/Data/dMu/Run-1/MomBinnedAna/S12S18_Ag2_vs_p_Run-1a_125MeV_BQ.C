void S12S18_Ag2_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:30:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.2994,-2.966606,2723.26,4.740626);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[22] = {
   366.6885,
   456.9353,
   570.4228,
   694.9017,
   815.8352,
   938.5325,
   1062.75,
   1188.288,
   1312.703,
   1435.863,
   1561.905,
   1685.207,
   1810.547,
   1935.125,
   2060.257,
   2184.91,
   2309.213,
   2433.147,
   2559.646,
   2678.447,
   2781.41,
   2886.078};
   Double_t Graph0_fy1039[22] = {
   1.75335,
   0.1458601,
   0.1489759,
   0.03484072,
   0.006289117,
   0.05695452,
   -0.008260186,
   0.0001547074,
   0.01378644,
   0.0208365,
   0.009718526,
   -0.02423431,
   -0.03152572,
   0.01894277,
   -0.01171486,
   -0.01993845,
   -0.03878004,
   -0.01842055,
   0.01992396,
   0.002440058,
   -0.04191145,
   0.4534645};
   Double_t Graph0_fex1039[22] = {
   0.2309951,
   0.1092124,
   0.07251533,
   0.04962127,
   0.03997118,
   0.03612002,
   0.0342106,
   0.0331161,
   0.03358597,
   0.0338255,
   0.03626653,
   0.03827066,
   0.04313196,
   0.04714073,
   0.05401014,
   0.05961023,
   0.0687829,
   0.08272529,
   0.09827916,
   0.1129676,
   0.233546,
   1.023868};
   Double_t Graph0_fey1039[22] = {
   1.702738,
   0.1602121,
   0.07716101,
   0.04648083,
   0.03219517,
   0.02646701,
   0.02324478,
   0.02096504,
   0.01968802,
   0.01867792,
   0.01867321,
   0.01808168,
   0.01877586,
   0.01900895,
   0.02000932,
   0.02044869,
   0.02162321,
   0.02363104,
   0.02541653,
   0.02819647,
   0.07350684,
   2.135532};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","S12S18",100,114.3931,3139.166);
   Graph_Graph01039->SetMinimum(-2.195883);
   Graph_Graph01039->SetMaximum(3.969903);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(22,79);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
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
