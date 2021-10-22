void S18_full_A_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:12 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.1535976,3468.85,0.2472472);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1250[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1250[15] = {
   0.1312192,
   0.1321253,
   0.1304023,
   0.1440798,
   0.1470276,
   0.1498308,
   0.162263,
   0.1541737,
   0.1419309,
   0.1394733,
   0.119022,
   0.1070043,
   0.1126408,
   0.08942889,
   -0.02513215};
   Double_t Graph0_fex1250[15] = {
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
   Double_t Graph0_fey1250[15] = {
   0.01819188,
   0.018192,
   0.01814146,
   0.01788585,
   0.01771705,
   0.01780766,
   0.01817673,
   0.01888148,
   0.01998705,
   0.0216491,
   0.02395093,
   0.02716882,
   0.03161876,
   0.03860063,
   0.06165802};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1250,Graph0_fy1250,Graph0_fex1250,Graph0_fey1250);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01250 = new TH1F("Graph_Graph01250","S18",100,0,3080);
   Graph_Graph01250->SetMinimum(-0.1135132);
   Graph_Graph01250->SetMaximum(0.2071627);
   Graph_Graph01250->SetDirectory(0);
   Graph_Graph01250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01250->SetLineColor(ci);
   Graph_Graph01250->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01250->GetXaxis()->SetRange(0,100);
   Graph_Graph01250->GetXaxis()->CenterTitle(true);
   Graph_Graph01250->GetXaxis()->SetLabelFont(42);
   Graph_Graph01250->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01250->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01250->GetXaxis()->SetTitleFont(42);
   Graph_Graph01250->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01250->GetYaxis()->CenterTitle(true);
   Graph_Graph01250->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01250->GetYaxis()->SetLabelFont(42);
   Graph_Graph01250->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01250->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01250->GetYaxis()->SetTitleFont(42);
   Graph_Graph01250->GetZaxis()->SetLabelFont(42);
   Graph_Graph01250->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01250->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01250);
   
   gre->Draw("ap");
   
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
