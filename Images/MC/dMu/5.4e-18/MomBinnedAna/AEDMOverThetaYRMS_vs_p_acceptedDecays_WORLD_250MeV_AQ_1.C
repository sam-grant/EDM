void AEDMOverThetaYRMS_vs_p_acceptedDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:24:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.4746,0.004930668,3031.369,0.02105523);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[12] = {
   141.6725,
   381.062,
   628.3398,
   876.3344,
   1124.572,
   1373.652,
   1622.832,
   1871.413,
   2119.63,
   2367.743,
   2613.51,
   2850.19};
   Double_t Graph0_fy1025[12] = {
   0.002706417,
   0.005588446,
   0.007995177,
   0.01009875,
   0.01193741,
   0.01400783,
   0.01493287,
   0.01570304,
   0.01619084,
   0.01620268,
   0.01570786,
   0.01207753};
   Double_t Graph0_fex1025[12] = {
   0.02559179,
   0.02344924,
   0.02122073,
   0.01994424,
   0.01973897,
   0.02022785,
   0.02106728,
   0.02255025,
   0.02503905,
   0.02905985,
   0.03585142,
   0.05075603};
   Double_t Graph0_fey1025[12] = {
   0.0005571437,
   0.0004610852,
   0.0004155724,
   0.0003912894,
   0.0003870577,
   0.0003963483,
   0.0004132782,
   0.0004426058,
   0.0004922363,
   0.0005723377,
   0.0007120589,
   0.001059537};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM}/#sigma#theta_{y} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","",100,0,3121.1);
   Graph_Graph01025->SetMinimum(0.006543124);
   Graph_Graph01025->SetMaximum(0.01944277);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01025->GetXaxis()->SetRange(25,89);
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
